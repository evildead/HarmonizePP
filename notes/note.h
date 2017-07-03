/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#ifndef NOTE_H
#define NOTE_H

#include "interval.h"

using namespace std;

class Note;

typedef std::vector<Note> Chord;

class Note
{
public:
    enum NoteName
    {
        C = 0,
        CSharp = 1,
        D = 2,
        DSharp = 3,
        E = 4,
        F = 5,
        FSharp = 6,
        G = 7,
        GSharp = 8,
        A = 9,
        ASharp = 10,
        B = 11
    };

protected:
    NoteName note_;

public:
    Note();

    Note(string note);

    Note(unsigned int note);

    NoteName note() const;

    void setNote(NoteName note);

    void fromString(string note);

    void fromNum(unsigned int num);

    string toString(bool usesharp = true, bool toupper = true) const;

    unsigned int toNum() const;

protected:
    static NoteName numberToNoteName(unsigned int num);
};

#endif // NOTE_H
