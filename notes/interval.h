/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#ifndef INTERVAL_H
#define INTERVAL_H

#include "externals/dstd/src/Utilities/utilities.h"

using namespace std;

class Interval
{
public:
    enum IntervalStep
    {
        Half = 1,           // half tone or semitone
        Whole = 2,          // whole tone or tone
        WholeAndHalf = 3    // whole tone and a half (3 semitones)
    };

    static const int NUM_OF_NOTES = 12;

protected:
    vector<IntervalStep> vInterval_;

public:
    static bool checkInterval(const vector<IntervalStep> &vInterval);

    static IntervalStep fromIntervalStepString(const string& step);

    Interval(const vector<IntervalStep> &vInterval);

    Interval(const string& strInterval);

    const vector<IntervalStep>& vInterval() const;

    void setVInterval(const vector<IntervalStep> &vInterval);

    void setIntervalFromString(const string& strInterval);
};

#endif // INTERVAL_H
