//
// Created by odin on 2017/04/27.
//

#ifndef EXERCISMIO_TASKS_BOB_HPP
#define EXERCISMIO_TASKS_BOB_HPP
#include <string>
namespace bob {
    //checks if if it contains a Uppercase and no Lowercase letters
    bool isUpper(std::string str)
    {
        bool hasUppercase = false;
        bool hasLowercase = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (isupper(str[i]))
                hasUppercase = true;
            if (islower(str[i]))
                hasLowercase = true;
        }
        return (!hasLowercase && hasUppercase);
    }
    //checks if the string contains anything else than spaces
    bool isNothing(std::string str)
    {
        bool hasSomthing = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ')
                hasSomthing = true;
        }
        return !hasSomthing;
    }

    std::string hey(std::string words)
    {
        if (isUpper(words))
        {
            return "Whoa, chill out!";
        }
        if (isNothing(words))
        {
            return "Fine. Be that way!";
        }
        if (words[words.length() - 1] == '?')
        {
            return "Sure.";
        }
        return "Whatever.";
    }
};

#endif //EXERCISMIO_TASKS_BOB_HPP
