/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#include <iomanip>
#include "scale.h"

using namespace std;

Scale::Scale(const Note& root, const Interval& interval)
{
    fromIntervalAndRootNote(root, interval);
}


void Scale::fromIntervalAndRootNote(const Note& root, const Interval& interval)
{
    unsigned int tmpNum = root.toNum();
    vScale_.push_back(root);

    vector<Interval::IntervalStep> myInterval = interval.vInterval();
    for(unsigned int i = 0; i < myInterval.size() - 1; i++) {
        tmpNum += static_cast<unsigned int>(myInterval.at(i));
        vScale_.push_back(Note(tmpNum));
    }
}


string Scale::toString(unsigned int degree, bool usesharp, bool toupper, int colWidth) const
{
    stringstream myStream;

    if((degree < 1) || (degree > vScale_.size())) {
        myStream << "-";
    }
    else {
        for(unsigned int i = 0; i < vScale_.size(); i++) {
            unsigned int vPos = (i + degree - 1) % vScale_.size();
            const Note& tmpNote = vScale_.at(vPos);
            myStream << setw(colWidth) << left << tmpNote.toString(usesharp, toupper);
        }
    }

    return myStream.str();
}

string Scale::harmonizeIt(vector<unsigned int> degrees, bool usesharp, bool toupper, int colWidth) const
{
    stringstream myStream;

    myStream << toString(1, usesharp, toupper, colWidth) << endl;

    for(unsigned int i = 0; i < degrees.size(); i++) {
        myStream << toString(degrees.at(i), usesharp, toupper, colWidth) << endl;
    }

    return myStream.str();
}
