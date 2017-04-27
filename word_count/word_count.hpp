//
// Created by odin on 2017/04/27.
//

#ifndef EXERCISMIO_TASKS_WORD_COUNT_HPP
#define EXERCISMIO_TASKS_WORD_COUNT_HPP

#include <map>
#include <string>
#include <vector>
#include <boost\algorithm\string.hpp>
#include <boost\range\algorithm\remove_if.hpp>
using std::vector;
using std::string;
using std::map;
using boost::is_any_of;
using boost::algorithm::split;
using boost::remove_if;
using boost::algorithm::to_lower;

namespace word_count{
    map<string, int> words(string str){
        //defines variables used
        vector<string> seperated;
        map<string, int> wordMap;

        //Removes all special characters from the string
        str.erase(remove_if(str, is_any_of("!&@$%^&:<>,.")), str.end());

        //splits the string at spaces and newlines
        split(seperated, str, is_any_of(" \n"));

        //Loops through all the words in the splited list and adds them to the map.
        for (int i = 0; i < seperated.size(); i++)
            if (seperated[i] != ""){
                to_lower(seperated[i]);
                wordMap[seperated[i]]++;
            }
        return wordMap;
    }
}

#endif //EXERCISMIO_TASKS_WORD_COUNT_HPP
