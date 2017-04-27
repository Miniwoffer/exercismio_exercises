//
// Created by odin on 2017/04/27.
//

#ifndef EXERCISMIO_TASKS_BEER_SONG_HPP
#define EXERCISMIO_TASKS_BEER_SONG_HPP
#include <string>

using std::string;
using std::to_string;

namespace beer{
    static string startVerse = " bottles of beer on the wall, ";
    static string middleVerse = " bottles of beer.\nTake one down and pass it around, ";
    static string endVerse = " bottles of beer on the wall.\n";

    static string oneUniqeVerse = "1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n";
    static string twoUniqeVerse = "2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n";

    static string zerouniqeVerse = "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n";

    static string verse(int i){
        if (i == 0) return zerouniqeVerse;
        if (i == 1) return oneUniqeVerse;
        if (i == 2) return twoUniqeVerse;

        return to_string(i) + startVerse + to_string(i) + middleVerse + to_string(i - 1) + endVerse;
    }
    static string sing(int i, int j = 0)
    {
        string ret;
        while (i >= j)
        {
            ret += verse(i);
            if (i != j) ret += "\n";
            i--;
        }
        return ret;
    }
};
#endif //EXERCISMIO_TASKS_BEER_SONG_HPP
