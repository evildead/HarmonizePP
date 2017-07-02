/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#ifndef SCALE_H
#define SCALE_H

#include "interval.h"
#include "note.h"

using namespace std;

class Scale
{
private:
    vector<Note> vScale_;

public:
    Scale(const Note& root, const Interval& interval);

    void fromIntervalAndRootNote(const Note& root, const Interval& interval);

    string toString(unsigned int degree, bool usesharp = true, bool toupper = true, int colWidth = 4) const;

    string harmonizeIt(vector<unsigned int> degrees, bool usesharp = true, bool toupper = true, int colWidth = 4) const;
};

#endif // SCALE_H
