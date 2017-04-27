//
// Created by odin on 2017/04/27.
//

#ifndef EXERCISMIO_TASKS_ANAGRAM_HPP
#define EXERCISMIO_TASKS_ANAGRAM_HPP

#include <string>
#include <vector>
#include <algorithm>
#include <boost\algorithm\string.hpp>

using std::string;
using std::vector;
using std::sort;
using boost::algorithm::to_lower;

class anagram{
public:
    anagram(string str)
    {
        word = str;
        unsortedword = str;
        to_lower(unsortedword);
        to_lower(word);
        sort(word.begin(), word.end());

    }
    vector<string> matches(vector<string> matches)
    {
        vector<string> output;
        vector<string> sortedmatches = matches;
        for (int i = 0; i < sortedmatches.size(); i++)
        {
            to_lower(sortedmatches[i]);
            if (unsortedword == sortedmatches[i])
                sortedmatches[i] = "";

            sort(sortedmatches[i].begin(), sortedmatches[i].end());
            if (sortedmatches[i] == word)
                output.push_back(matches[i]);
        }
        return output;
    }
private:
    string word;
    string unsortedword;
};

#endif //EXERCISMIO_TASKS_ANAGRAM_HPP
