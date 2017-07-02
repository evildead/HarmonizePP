/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#include "interval.h"

using namespace std;

bool Interval::checkInterval(const vector<IntervalStep> &vInterval)
{
    int totalSteps = 0;

    vector<IntervalStep>::const_iterator vIt;
    for(vIt = vInterval.cbegin(); vIt != vInterval.cend(); vIt++) {
        totalSteps += static_cast<int>(*vIt);
    }

    if(totalSteps != NUM_OF_NOTES) {
        return false;
    }
    else {
        return true;
    }
}

Interval::IntervalStep Interval::fromIntervalStepString(const string& step)
{
    if((step.compare("W") == 0) || (step.compare("w") == 0) || (step.compare("T") == 0) || (step.compare("t") == 0)) {
        return Whole;
    }
    else if((step.compare("H") == 0) || (step.compare("h") == 0) || (step.compare("S") == 0) || (step.compare("s") == 0)) {
        return Half;
    }
    else if((step.compare("WH") == 0) || (step.compare("wh") == 0) || (step.compare("TS") == 0) || (step.compare("ts") == 0)) {
        return WholeAndHalf;
    }

    return Half;
}

Interval::Interval(const vector<IntervalStep> &vInterval)
{
    setVInterval(vInterval);
}

Interval::Interval(const string& strInterval)
{
    setIntervalFromString(strInterval);
}

const vector<Interval::IntervalStep>& Interval::vInterval() const
{
    return vInterval_;
}

void Interval::setVInterval(const vector<IntervalStep> &vInterval)
{
    if(checkInterval(vInterval)) {
        vInterval_ = vInterval;
    }
}

void Interval::setIntervalFromString(const string& strInterval)
{
    vector<IntervalStep> vInterval;

    vector<string> strSteps;
    dstd::tokenize(strInterval, strSteps, " \t");

    vector<string>::iterator stepsIt;
    for(stepsIt = strSteps.begin(); stepsIt != strSteps.end(); stepsIt++) {
        vInterval.push_back( fromIntervalStepString(*stepsIt) );
    }

    setVInterval(vInterval);
}
