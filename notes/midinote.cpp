/*************************************************
 *                                               *
 *   Author: Danilo Carrabino                    *
 *                                               *
 *************************************************/


#include "midinote.h"

MidiNote::MidiNote() :
    octave_(0),
    note_("C")
{

}

MidiNote::MidiNote(Note note, unsigned int octave) :
    octave_(octave),
    note_(note)
{

}


unsigned int MidiNote::octave() const
{
    return octave_;
}

void MidiNote::setOctave(unsigned int octave)
{
    octave_ = octave;
}

Note MidiNote::note() const
{
    return note_;
}

void MidiNote::setNote(const Note &note)
{
    note_ = note;
}


int MidiNote::toMidiNoteNumber()
{
    (Interval::NUM_OF_NOTES * octave_) + note_.toNum();
}

void MidiNote::fromMidiNoteNumber(int noteNum)
{
    octave_ = static_cast<unsigned int>(noteNum / Interval::NUM_OF_NOTES);
    note_.fromNum(noteNum - (Interval::NUM_OF_NOTES * octave_));
}
