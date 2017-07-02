/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#include "note.h"

using namespace std;

Note::Note()
{
    setNote(C);
}

Note::Note(string note)
{
    fromString(note);
}

Note::Note(unsigned int note)
{
    fromNum(note);
}

Note::NoteName Note::note() const
{
    return note_;
}

void Note::setNote(NoteName note)
{
    note_ = note;
}

void Note::fromString(string note)
{
    if((note.compare("C") == 0) || (note.compare("c") == 0)) {
        setNote(C);
    }
    else if((note.compare("C#") == 0) || (note.compare("c#") == 0) || (note.compare("Db") == 0) || (note.compare("db") == 0)) {
        setNote(CSharp);
    }
    else if((note.compare("D") == 0) || (note.compare("d") == 0)) {
        setNote(D);
    }
    else if((note.compare("D#") == 0) || (note.compare("d#") == 0) || (note.compare("Eb") == 0) || (note.compare("eb") == 0)) {
        setNote(DSharp);
    }
    else if((note.compare("E") == 0) || (note.compare("e") == 0)) {
        setNote(E);
    }
    else if((note.compare("F") == 0) || (note.compare("f") == 0)) {
        setNote(F);
    }
    else if((note.compare("F#") == 0) || (note.compare("f#") == 0) || (note.compare("Gb") == 0) || (note.compare("gb") == 0)) {
        setNote(FSharp);
    }
    else if((note.compare("G") == 0) || (note.compare("g") == 0)) {
        setNote(G);
    }
    else if((note.compare("G#") == 0) || (note.compare("g#") == 0) || (note.compare("Ab") == 0) || (note.compare("ab") == 0)) {
        setNote(GSharp);
    }
    else if((note.compare("A") == 0) || (note.compare("a") == 0)) {
        setNote(A);
    }
    else if((note.compare("A#") == 0) || (note.compare("a#") == 0) || (note.compare("Bb") == 0) || (note.compare("bb") == 0)) {
        setNote(ASharp);
    }
    else if((note.compare("B") == 0) || (note.compare("b") == 0)) {
        setNote(B);
    }
}

void Note::fromNum(unsigned int num)
{
    setNote( numberToNoteName(num) );
}

string Note::toString(bool usesharp, bool toupper) const
{
    switch(note_) {
    case C:
        if(toupper) {
            return "C";
        }
        else {
            return "c";
        }

    case CSharp:
        if(usesharp) {
            if(toupper) {
                return "C#";
            }
            else {
                return "c#";
            }
        }
        else {
            if(toupper) {
                return "Db";
            }
            else {
                return "db";
            }
        }

    case D:
        if(toupper) {
            return "D";
        }
        else {
            return "d";
        }

    case DSharp:
        if(usesharp) {
            if(toupper) {
                return "D#";
            }
            else {
                return "d#";
            }
        }
        else {
            if(toupper) {
                return "eb";
            }
            else {
                return "eb";
            }
        }

    case E:
        if(toupper) {
            return "E";
        }
        else {
            return "e";
        }

    case F:
        if(toupper) {
            return "F";
        }
        else {
            return "f";
        }

    case FSharp:
        if(usesharp) {
            if(toupper) {
                return "F#";
            }
            else {
                return "f#";
            }
        }
        else {
            if(toupper) {
                return "Gb";
            }
            else {
                return "gb";
            }
        }

    case G:
        if(toupper) {
            return "G";
        }
        else {
            return "g";
        }

    case GSharp:
        if(usesharp) {
            if(toupper) {
                return "G#";
            }
            else {
                return "g#";
            }
        }
        else {
            if(toupper) {
                return "Ab";
            }
            else {
                return "ab";
            }
        }

    case A:
        if(toupper) {
            return "A";
        }
        else {
            return "a";
        }

    case ASharp:
        if(usesharp) {
            if(toupper) {
                return "A#";
            }
            else {
                return "a#";
            }
        }
        else {
            if(toupper) {
                return "Bb";
            }
            else {
                return "bb";
            }
        }

    case B:
        if(toupper) {
            return "B";
        }
        else {
            return "b";
        }

    default:
        if(toupper) {
            return "C";
        }
        else {
            return "c";
        }
    }
}

unsigned int Note::toNum() const
{
    return static_cast<unsigned int>(note_);
}

Note::NoteName Note::numberToNoteName(unsigned int num)
{
    unsigned int myNum = num % Interval::NUM_OF_NOTES;

    switch(myNum) {
    case 0:
        return C;
    case 1:
        return CSharp;
    case 2:
        return D;
    case 3:
        return DSharp;
    case 4:
        return E;
    case 5:
        return F;
    case 6:
        return FSharp;
    case 7:
        return G;
    case 8:
        return GSharp;
    case 9:
        return A;
    case 10:
        return ASharp;
    case 11:
        return B;

    default:
        return C;
    }
}
