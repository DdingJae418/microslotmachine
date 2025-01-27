#ifndef SOUNDS_H
#define SOUNDS_H

#include <vector>
#include <utility>
#include "note_frequency.h"

using BuzzerSound = std::vector<std::pair<double, float>>;
using NoteIter = BuzzerSound::const_iterator;

namespace sounds
{
    // Zenonia3 ost
    inline const BuzzerSound READY_SONG = {
        {NOTE_FS5, 1.5}, {NOTE_G5, 0.5}, {NOTE_A5, 2.95}, {NOTE_REST, 0.05}, {NOTE_A5, 0.5},
        {NOTE_G5, 0.5}, {NOTE_FS5, 0.5}, {NOTE_G5, 0.5}, {NOTE_A5, 0.5}, {NOTE_CS6, 0.5},
        {NOTE_D6, 4}, {NOTE_REST, 1}, {NOTE_A5, 1}, {NOTE_E6, 1.5}, {NOTE_D6, 0.45}, 
        {NOTE_REST, 0.05}, {NOTE_D6, 2.9}, {NOTE_REST, 0.1}, {NOTE_B5, 1}, {NOTE_A5, 1}, 
        {NOTE_B5, 1}, {NOTE_FS5, 0.2}, {NOTE_E5, 1.3}, {NOTE_D5, 0.45}, {NOTE_REST, 0.05},  
        {NOTE_D5, 2}, {NOTE_B4, 1.5}, {NOTE_D5, 0.5}, {NOTE_FS5, 2}, {NOTE_G5, 1.9},
        {NOTE_REST, 0.1}
    };

    inline const BuzzerSound START_SOUND = {
        {NOTE_C5, 0.5}, {NOTE_D5, 0.5}, {NOTE_E5, 0.5}, {NOTE_F5, 0.5}, {NOTE_G5, 4}
    };

    inline const BuzzerSound REEL_SOUND = {
        {NOTE_C5, 0.5}
    };

    inline const BuzzerSound START_PLAYING_SOUND = {
        {NOTE_G5, 1}, {NOTE_REST, 0.5}, {NOTE_G5, 1}, {NOTE_REST, 0.5}, {NOTE_G5, 3}
    };

    inline const BuzzerSound PLAYING_SONG = {
        {NOTE_C5, 0.5}, {NOTE_E5, 0.5}, {NOTE_G5, 0.5}, {NOTE_C6, 0.5}, {NOTE_REST, 0.2},
        {NOTE_C6, 0.5}, {NOTE_G5, 0.5}, {NOTE_E5, 0.5}, {NOTE_C5, 0.5}, {NOTE_REST, 0.2},
        {NOTE_D5, 0.5}, {NOTE_F5, 0.5}, {NOTE_A5, 0.5}, {NOTE_D6, 0.5}, {NOTE_REST, 0.2},
        {NOTE_D6, 0.5}, {NOTE_A5, 0.5}, {NOTE_F5, 0.5}, {NOTE_D5, 0.5}, {NOTE_REST, 0.2},
        {NOTE_E5, 0.5}, {NOTE_G5, 0.5}, {NOTE_B5, 0.5}, {NOTE_E6, 0.5}, {NOTE_REST, 0.2},
        {NOTE_E6, 0.5}, {NOTE_B5, 0.5}, {NOTE_G5, 0.5}, {NOTE_E5, 0.5}, {NOTE_REST, 0.2},
        {NOTE_C6, 1.0}, {NOTE_B5, 0.5}, {NOTE_A5, 0.5}, {NOTE_REST, 0.2},
        {NOTE_A5, 0.5}, {NOTE_G5, 0.5}, {NOTE_F5, 0.5}, {NOTE_E5, 0.5}, {NOTE_REST, 0.2}
    };

    inline const BuzzerSound RESET_SOUND = {
        {NOTE_G5, 0.5}, {NOTE_F5, 0.5}, {NOTE_E5, 0.5}, {NOTE_D5, 0.5}, {NOTE_C5, 4}
    };

    inline const BuzzerSound LEVER_SOUND = {
        {NOTE_REST, 0.2}, {NOTE_D6, 0.5}, {NOTE_G6, 0.5}
    };

    // Reverse sound of the LEVER_SOUND
    inline const BuzzerSound REEL_STOP_SOUND(LEVER_SOUND.rbegin(), LEVER_SOUND.rend());

    inline const BuzzerSound FAIL_SOUND = {
        {NOTE_E5, 0.5}, {NOTE_DS5, 0.5}, {NOTE_D5, 0.5}, {NOTE_CS5, 1}
    };

    inline const BuzzerSound SUCCESS_SOUND = {
        {NOTE_G6, 0.5}, {NOTE_REST, 0.1}, {NOTE_G6, 0.2}, {NOTE_REST, 0.1}, {NOTE_G6, 0.2}, 
        {NOTE_REST, 0.1}, {NOTE_G6, 1.5}, {NOTE_REST, 0.1}, {NOTE_A6, 0.75}, {NOTE_G6, 0.85}, 
        {NOTE_A6, 0.9}, {NOTE_B6, 0.6}, {NOTE_REST, 0.1}, {NOTE_B6, 0.3}, {NOTE_REST, 0.1}, 
        {NOTE_B6, 0.3}, {NOTE_REST, 0.1}, {NOTE_B6, 3}
    };
}


#endif