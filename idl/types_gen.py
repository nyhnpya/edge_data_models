#!/usr/bin/python
#/*
# *  Copyright (c) 2019 Ensign Energy Incorporated
# *  All Rights Reserved.
# *
# * NOTICE:  All information contained herein is, and remains
# * the property of Ensign Energy Incorporated and its suppliers,
# * if any.  The intellectual and technical concepts contained
# * herein are proprietary to Ensign Energy Incorporated
# * and its suppliers and may be covered by U.S. and Foreign Patents,
# * patents in process, and are protected by trade secret or copyright law.
# * Dissemination of this information or reproduction of this material
# * is strictly forbidden unless prior written permission is obtained
# * from Ensign Energy Incorporated.
# */

class StructField:
    name = ''
    datatype = ''
    unit_namespace = ''
    unit_name = ''
    key = False
    comment = ''

    def __init__(self, name, datatype, unit_namespace, unit_name, key, comment):
        self.name = name
        self.datatype = datatype
        self.unit_namespace = unit_namespace
        self.unit_name = unit_name
        self.key = key
        self.comment = comment

class Struct:
    name_camel_case = ''
    name_underscore = ''
    fields_with_units = 0
    fields = []
    copyc = ''
    ingroup = list()
    brief_comments = list()
    comments = list()

    def __init__(self):
        name_camel_case = ''
        name_underscore = ''
        fields_with_units = 0
        fields = []
        copyc = ''
        ingroup = list()
        brief_comments = list()
        comments = list()


