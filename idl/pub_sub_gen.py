#!/usr/bin/python
import sys
import re

idl_name = ''
idl_file_name = ''
output_dir = ''
module_name = ''
#struct_name_camel_case = ''
#struct_name_underscore = ''
#fields_list = []
enums = []

class StructField:
    name = ''
    datatype = ''
    unit_namespace = ''
    unit_name = ''
    key = False

    def __init__(self, name, datatype, unit_namespace, unit_name, key):
        self.name = name
        self.datatype = datatype
        self.unit_namespace = unit_namespace
        self.unit_name = unit_name
        self.key = key

class Struct:
    name_camel_case = ''
    name_underscore = ''
    fields_with_units = 0
    fields = []

    def __init__(self):
        name_camel_case = ''
        name_underscore = ''
        fields_with_units = 0
        fields = []

def str_cap(word):
    word = re.sub('([a-zA-Z])', lambda x: x.groups()[0].upper(), word, 1)
    return word

def write_publisher_h(outdir, struct):
    out = open(outdir + '/' + struct.name_underscore + '_publisher.h', 'w')
    out.write('#ifndef __' + module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_PUBLISHER_H__\n')
    out.write('#define __' + module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_PUBLISHER_H__\n')
    out.write('\n')
    out.write('#include "publisher.h"\n')
    out.write('#include "' + idl_name + '.h"\n')
    out.write('#include "' + idl_name + 'Support.h"\n')
    out.write('\n')
    out.write('#ifdef _WIN32\n')
    out.write('#undef pascal\n')
    out.write('#endif\n')
    out.write('\n')
    units_list = []
    if struct.fields_with_units > 0:
        out.write('#include "units.h"\n')
        out.write('\n')
        out.write('using namespace units;\n') 
        for sfield in struct.fields:
            if sfield.unit_namespace not in units_list and sfield.unit_namespace != '':
                out.write('using namespace units::' + sfield.unit_namespace + ';\n') 
                units_list.append(sfield.unit_namespace)
        out.write('\n')
    out.write('class C' + struct.name_camel_case + 'Publisher : public TPublisher< ' + module_name + struct.name_camel_case + ' >\n')
    out.write('{\n')
    out.write('    public:\n')
    out.write('        C' + struct.name_camel_case + 'Publisher();\n')
    out.write('        ~C' + struct.name_camel_case + 'Publisher();\n')
    out.write('        \n')
    out.write('        bool Create(int32_t domain);\n')
    out.write('        bool Initialize();\n')
    out.write('        bool PublishSample();\n')
    out.write('        \n')
    for sfield in struct.fields:
        if sfield.datatype in enums:
            out.write('        void Set' + str_cap(sfield.name) + '(' + module_name + sfield.datatype + ' ' + sfield.name + ');\n')
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('        void Set' + str_cap(sfield.name) + '(' + sfield.datatype + ' &' + sfield.name + ');\n')
        elif sfield.unit_name != '':
            out.write('        void Set' + str_cap(sfield.name) + '(const ' + sfield.unit_name + '_t ' + sfield.name + ');\n')
        else: 
            out.write('        void Set' + str_cap(sfield.name) + '(const ' + sfield.datatype + ' ' + sfield.name + ');\n')
    out.write('};\n')
    out.write('\n')
    out.write('#endif // __' + module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_PUBLISHER_H__\n')
    out.close()


def write_publisher_cxx(outdir, struct):
    out = open(outdir + '/' + struct.name_underscore + '_publisher.cxx', 'w')
    out.write('#include "dds_uuid.h"\n')
    out.write('#include "' + struct.name_underscore + '_publisher.h"\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Publisher::C' + struct.name_camel_case + 'Publisher()\n')
    out.write('{\n')
    out.write('}\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Publisher::~C' + struct.name_camel_case + 'Publisher()\n')
    out.write('{\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Publisher::Create(int32_t domain)\n')
    out.write('{\n')
    out.write('    return TPublisher::Create(domain,\n')
    out.write('                       ' + module_name + struct.name_underscore.upper() + ',\n')
    out.write('                       "EdgeBaseLibrary",\n')
    out.write('                       "EdgeBaseProfile");\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Publisher::Initialize()\n')
    out.write('{\n')
    out.write('    CDdsUuid uuid;\n')
    out.write('    bool retVal = false;\n')
    out.write('\n')
    out.write('    if (m_pDataInstance != nullptr)\n')
    out.write('    {\n')
    out.write('        uuid.GenerateUuid();\n')
    out.write('        m_pDataInstance->id = DDS_String_dup(uuid.c_str());\n')
    out.write('        retVal = true;\n')
    out.write('    }\n')
    out.write('\n')
    out.write('    return retVal;\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Publisher::PublishSample()\n')
    out.write('{\n')
    out.write('    return Publish();\n')
    out.write('}\n')
    out.write('\n')
    for sfield in struct.fields:
        if sfield.datatype in enums:
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(' + module_name + sfield.datatype + ' ' + sfield.name + ')\n')
        elif sfield.unit_name != '':
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(const ' + sfield.unit_name + '_t ' + sfield.name + ')\n')
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(' + sfield.datatype + ' &' + sfield.name + ')\n')
        else:
            out.write('void C' + struct.name_camel_case + 'Publisher::Set' + str_cap(sfield.name) + '(' + sfield.datatype + ' ' + sfield.name + ')\n')
        out.write('{\n')
        out.write('    if (m_pDataInstance != nullptr)\n')        
        out.write('    {\n')
        if sfield.unit_name != '':
            out.write('        m_pDataInstance->' + sfield.name + ' = units::unit_cast<double>(' + sfield.name + ');\n') 
        elif 'DataTypes::Uuid' in sfield.datatype:
            out.write('        m_pDataInstance->' + sfield.name + ' = DDS_String_dup(' + sfield.name + ');\n') 
        else:
            out.write('        m_pDataInstance->' + sfield.name + ' = ' + sfield.name + ';\n') 
        out.write('    }\n')
        out.write('}\n')
        out.write('\n')

    out.close()


def write_subscriber_h(outdir, struct):
    out = open(outdir + '/' + struct.name_underscore + '_subscriber.h', 'w')
    out.write('#ifndef __' + module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_SUBSCRIBER_H__\n')
    out.write('#define __' + module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_SUBSCRIBER_H__\n')
    out.write('\n')
    out.write('#include "subscriber.h"\n')
    out.write('#include "' + idl_name + '.h"\n')
    out.write('#include "' + idl_name + 'Support.h"\n')
    out.write('\n')
    out.write('#ifdef _WIN32\n')
    out.write('#undef pascal\n')
    out.write('#endif\n')
    out.write('\n')
    units_list = []
    if struct.fields_with_units > 0:
        out.write('#include "units.h"\n')
        out.write('\n')
        out.write('using namespace units;\n') 
        for sfield in struct.fields:
            if sfield.unit_namespace not in units_list and sfield.unit_namespace != '':
                out.write('using namespace units::' + sfield.unit_namespace + ';\n') 
                units_list.append(sfield.unit_namespace)
        out.write('\n')
    out.write('class C' + struct.name_camel_case + 'Subscriber : public TSubscriber< ' + module_name + struct.name_camel_case + ' >\n')
    out.write('{\n')
    out.write('    public:\n')
    out.write('        C' + struct.name_camel_case + 'Subscriber();\n')
    out.write('        ~C' + struct.name_camel_case + 'Subscriber();\n')
    out.write('        \n')
    out.write('        bool Create(int32_t domain);\n')
    out.write('        void OnDataAvailable(OnDataAvailableEvent event);\n')
    out.write('        void OnDataDisposed(OnDataDisposedEvent event);\n')
    out.write('        void OnLivelinessChanged(OnLivelinessChangedEvent event);\n')
    out.write('        void OnPublicationMatched(OnPublicationMatchedEvent event);\n')
    out.write('        void OnSubscriptionMatched(OnSubscriptionMatchedEvent event);\n')
    out.write('        bool ValidData();\n')
    out.write('        bool ValidSubscription();\n')
    out.write('        \n')
    for sfield in struct.fields:
        if sfield.datatype in enums:
            out.write('        ' + module_name + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
        elif sfield.unit_name != '':
            out.write('        ' + sfield.unit_name + '_t Get' + str_cap(sfield.name) + '();\n') 
        else:
            out.write('        ' + sfield.datatype + ' Get' + str_cap(sfield.name) + '();\n') 
    out.write('\n')
    out.write('    protected:\n')
    out.write('        void DataAvailable(const ' + module_name + struct.name_camel_case + ' &data,\n') 
    out.write('                           const DDS::SampleInfo &sampleInfo);\n')
    out.write('        void DataDisposed(const DDS::SampleInfo &sampleInfo);\n')
    out.write('        void LivelinessChanged(const DDS::LivelinessChangedStatus &status);\n')
    out.write('        void SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status);\n')
    out.write('        void PublicationMatched(const DDS::PublicationMatchedStatus &status);\n')
    out.write('\n')        
    out.write('    private:\n')        
    out.write('        {0: <50}'.format('bool') + 'm_subscriptionMatched;\n')        
    out.write('        {0: <50}'.format(module_name + struct.name_camel_case) + 'm_data;\n')        
    out.write('        {0: <50}'.format('DDS::SampleInfo') + 'm_sampleInfo;\n')        
    out.write('        {0: <50}'.format('DDS::LivelinessChangedStatus') + 'm_livelinessStatus;\n')        
    out.write('        {0: <50}'.format('OnDataAvailableEvent') + 'm_pOnDataAvailable;\n')        
    out.write('        {0: <50}'.format('OnDataDisposedEvent') + 'm_pOnDataDisposed;\n')        
    out.write('        {0: <50}'.format('OnLivelinessChangedEvent') + 'm_pOnLivelinessChanged;\n')        
    out.write('        {0: <50}'.format('OnSubscriptionMatchedEvent') + 'm_pOnSubscriptionMatched;\n')        
    out.write('        {0: <50}'.format('OnPublicationMatchedEvent') + 'm_pOnPublicationMatched;\n')        
    out.write('};\n')
    out.write('\n')
    out.write('#endif // __' + module_name.replace("::","_").upper()+ struct.name_underscore.upper() + '_SUBSCRIBER_H__\n')
    out.close()


def write_subscriber_cxx(outdir, struct):
    out = open(outdir + '/' + struct.name_underscore + '_subscriber.cxx', 'w')
    out.write('#include "' + struct.name_underscore + '_subscriber.h"\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Subscriber::C' + struct.name_camel_case + 'Subscriber() :\n')
    out.write('    m_subscriptionMatched(false),\n')
    out.write('    m_pOnDataAvailable(nullptr),\n')
    out.write('    m_pOnDataDisposed(nullptr),\n')
    out.write('    m_pOnLivelinessChanged(nullptr),\n')
    out.write('    m_pOnSubscriptionMatched(nullptr),\n')
    out.write('    m_pOnPublicationMatched(nullptr)\n')
    out.write('{\n')
    out.write('    memset((void *)&m_sampleInfo, 0, sizeof(DDS::SampleInfo));\n')
    out.write('}\n')
    out.write('\n')
    out.write('C' + struct.name_camel_case + 'Subscriber::~C' + struct.name_camel_case + 'Subscriber()\n')
    out.write('{\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Subscriber::ValidData()\n')
    out.write('{\n')
    out.write('    return (m_sampleInfo.valid_data == DDS_BOOLEAN_TRUE);\n')
    out.write('}\n')
    out.write('\n')
    out.write('bool C' + struct.name_camel_case + 'Subscriber::ValidSubscription()\n')
    out.write('{\n')
    out.write('    return m_subscriptionMatched;\n')
    out.write('}\n')
    out.write('\n')
    for sfield in struct.fields:
        if sfield.datatype in enums:
            out.write(module_name + sfield.datatype + ' C' + struct.name_camel_case + 'Subscriber::Get' + str_cap(sfield.name) + '()\n')
        elif sfield.unit_name != '':
            out.write(sfield.unit_name + '_t C' + struct.name_camel_case + 'Subscriber::Get' + str_cap(sfield.name) + '()\n')
        else:
            out.write(sfield.datatype + ' C' + struct.name_camel_case + 'Subscriber::Get' + str_cap(sfield.name) + '()\n')
        out.write('{\n')
        if 'DataTypes::Uuid' == fields[0]:
            out.write('    return DDS_String_dup(m_data.' + sfield.name + ');\n')
        elif 'DataTypes::Uuid' == fields[0]:
            out.write('    return m_data.' + sfield.name + ';\n')
        elif sfield.unit_name != '':
            out.write('    return (' + sfield.unit_name + '_t)m_data.' + sfield.name + ';\n')
        else:
            out.write('    return m_data.' + sfield.name + ';\n')
        out.write('}\n')
        out.write('\n')

    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnDataAvailable(OnDataAvailableEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnDataAvailable = event;\n')
    out.write('}\n')
    out.write('\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnDataDisposed(OnDataDisposedEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnDataDisposed = event;\n')
    out.write('}\n')
    out.write('\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnLivelinessChanged(OnLivelinessChangedEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnLivelinessChanged = event;\n')
    out.write('}\n')
    out.write('\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::OnSubscriptionMatched(OnSubscriptionMatchedEvent event)\n')
    out.write('{\n')
    out.write('    m_pOnSubscriptionMatched = event;\n')
    out.write('}\n')
    out.write('\n')

    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::DataAvailable(const ' + module_name + struct.name_camel_case + ' &data,\n')
    out.write('                          const DDS::SampleInfo &sampleInfo)\n')
    out.write('{\n')
    out.write('    m_sampleInfo = sampleInfo;\n')
    out.write('    \n')
    out.write('    if (sampleInfo.valid_data == DDS_BOOLEAN_TRUE)\n')
    out.write('    {\n')
    out.write('        m_data = data;\n')
    out.write('    \n')
    out.write('        if (m_pOnDataAvailable != nullptr)\n')
    out.write('        {\n')
    out.write('            m_pOnDataAvailable(sampleInfo);\n')
    out.write('        }\n')
    out.write('    \n')
    out.write('    }\n')
    out.write('}\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::DataDisposed(const DDS::SampleInfo &sampleInfo)\n')
    out.write('{\n')
    out.write('    m_sampleInfo = sampleInfo;\n')
    out.write('    \n')
    out.write('    if (m_pOnDataDisposed != nullptr)\n')
    out.write('    {\n')
    out.write('        m_pOnDataDisposed(sampleInfo);\n')
    out.write('    }\n')
    out.write('}\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::LivelinessChanged(const DDS::LivelinessChangedStatus &status)\n')
    out.write('{\n')
    out.write('    if (m_pOnLivelinessChanged != nullptr)\n')
    out.write('    {\n')
    out.write('        m_pOnLivelinessChanged(status);\n')
    out.write('    }\n')
    out.write('}\n')
    out.write('\n')
    out.write('void C' + struct.name_camel_case + 'Subscriber::SubscriptionMatched(const DDS::SubscriptionMatchedStatus &status)\n')
    out.write('{\n')
    out.write('    m_subscriptionMatched = (status.current_count > 0) ? true : false;\n')
    out.write('    \n')
    out.write('    if (m_pOnSubscriptionMatched != nullptr)\n')
    out.write('    {\n')
    out.write('        m_pOnSubscriptionMatched(status);\n')
    out.write('    }\n')
    out.write('}\n')

    out.close()


# read in idl file
output_dir = sys.argv[2]
idl_file_name = sys.argv[1]
if '.cpy' in idl_file_name:
    idl_file_name = idl_file_name.replace('.cpy', '.idl')

print 'Processing file: ' + idl_file_name + ' into directory: ' + output_dir + '\n'

idl_name = ''
for ifn in idl_file_name.replace('.idl','').split('/'):
    idl_name = ifn

with open(idl_file_name) as idl_file:
    for line in idl_file:
        if 'enum' in line:
            enum_name = line.split()[1]
            enums.append(enum_name)
            print 'enum_name: ' + enum_name
        if 'module' in line:
            module_name += line.split()[1] + '::'
            #print 'module_name: ' + module_name
        if 'struct' in line:
            #fields_list = []
            current_struct = Struct() 
            current_struct.name_camel_case = line.split()[1]
            print 'struct_name: ' + current_struct.name_camel_case
            current_struct.name_underscore = re.sub(r"(\w)([A-Z])", r"\1_\2", current_struct.name_camel_case).lower()
            print 'struct_file_name: ' + current_struct.name_underscore
            current_struct.fields = []
            print 'len(struct.fields): ' + str(len(current_struct.fields))
            for line in idl_file:
                if '};' in line:
                    write_publisher_h(output_dir, current_struct)
                    write_publisher_cxx(output_dir, current_struct)
                    write_subscriber_h(output_dir, current_struct)
                    write_subscriber_cxx(output_dir, current_struct)
                    break
                if ';' not in line:
                    continue
                fields = line.replace(';','').split()
                if len(fields) < 2:
                    continue
                unit_namespace = ''
                unit_name = ''
                if 'units::' in line:
                    for field in fields:
                        if 'units::' not in field:
                            continue;
                        ufields = field.replace('(','').replace(')','').split('::')
                        current_struct.fields_with_units += 1
                        unit_namespace = ufields[1]
                        unit_name = ufields[2]
                iskey = False
                if '@key' in line:
                    iskey = True
                struct_field = StructField(fields[1], fields[0], unit_namespace, unit_name, iskey) 
                current_struct.fields.append(struct_field)


