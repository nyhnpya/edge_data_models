#ifndef __SURVEY_DDS_SUBSCRIBER_H__
#define __SURVEY_DDS_SUBSCRIBER_H__

#include <mutex>
#include "subscriber.h"
#include "base_data_types.h"
#include "survey.h"
#include "surveySupport.h"

class CSurveySubscriber : public TSubscriber< Downhole::SurveyState>
{
public:
    /// @return singleton instance
    static CSurveySubscriber *Instance(void);
    static void Destroy(void);

    bool Create(int32_t domain);

    // Topic getters
    bool GetMeasuredDepth(double &measuredDepth);
    bool GetInclination(double &inclination);
    bool GetAzimuth(double &azimuth);
    bool GetTotalVerticalDepth(double &totalVerticalDepth);
    bool GetDogLeg(double &dogLeg);
    bool GetVerticalSection(double &verticalSection);
    bool GetEastWest(double &eastWest);
    bool GetNorthSouth(double &northSouth);
    bool GetCL(double &cl);
    bool GetCA(double &ca);
    bool GetCD(double &cd);
    bool GetTurnRate(double &turnRate);
    bool GetBuildRate(double &buildRate);
    bool GetTopOfTarget(double &topOfTarget);
    bool GetBottomOfTarget(double &bottomOfTarget);
    bool GetDip(double &dip);
    bool GetFault(double &fault);

protected:
    ///Derived Methods
    void DataAvailable(const Downhole::SurveyState &data,
                       const DDS::SampleInfo& sampleInfo);

    void DataDisposed(const DDS::SampleInfo& sampleInfo);

private:
    CSurveySubscriber();
    virtual ~CSurveySubscriber();

    Downhole::SurveyState m_data;
    DDS::SampleInfo       m_sampleInfo;

    static CSurveySubscriber  *m_pInstance;
    static std::mutex          m_mutex;
};

#endif // __SURVEY_DDS_SUBSCRIBER_H__
