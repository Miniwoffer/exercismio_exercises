//
// Created by odin on 2017/04/27.
//

#ifndef EXERCISMIO_TASKS_FOOD_CHAIN_HPP
#define EXERCISMIO_TASKS_FOOD_CHAIN_HPP
#include <string>
#include <map>

using std::string;
using std::map;

namespace food_chain{
    //contains the common part of the first line of every verse
    static string firstline = "I know an old lady who swallowed a ";

    //contans the names for all the animales
    static string animales[8] = {
            "fly.\n",
            "spider.\n",
            "bird.\n",
            "cat.\n",
            "dog.\n",
            "goat.\n",
            "cow.\n",
            "horse.\n"};

    //contains the lines that a reapated every verse expect the last
    static string repeatedline[8] = {
            "I don't know why she swallowed the fly. Perhaps she'll die.",
            "She swallowed the spider to catch the fly.",
            "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.",
            "She swallowed the cat to catch the bird.",
            "She swallowed the dog to catch the cat.",
            "She swallowed the goat to catch the dog.",
            "She swallowed the cow to catch the goat."};
    //contains the line that is unique for that verse
    static string uniqueline[8] = {
            "",
            "It wriggled and jiggled and tickled inside her.\n",
            "How absurd to swallow a bird!\n",
            "Imagine that, to swallow a cat!\n",
            "What a hog, to swallow a dog!\n",
            "Just opened her throat and swallowed a goat!\n",
            "I don't know how she swallowed a cow!\n",
            "She's dead, of course!\n"};

    static string verse(int i){
        //adds the first line to the ret string
        i--;
        string ret = firstline + animales[i] + uniqueline[i];
        //adds the unique text that is pressent in every verse expect the first
        //returns earlier if its the final verse
        if (i == 7)
        {
            return ret;
        }
        //adds the all the repated lines to the verse
        for (int j = i; j >= 0; j--)
        {
            ret += repeatedline[j] + "\n";
        }
        //returns the verse
        return ret;
    }

    static string verses(int i, int j){
        //returns all the verses from "i" including "j"
        string ret;
        while (i <= j)
        {
            ret += verse(i)+"\n";
            i++;
        }
        return ret;
    }

    static string sing()
    {
        //returns the whole song
        return verses(1, 8);
    }
}
#endif //EXERCISMIO_TASKS_FOOD_CHAIN_HPP
