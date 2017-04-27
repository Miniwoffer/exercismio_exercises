//
// Created by odin on 2017/04/27.
//

#ifndef EXERCISMIO_TASKS_HAMMING_HPP
#define EXERCISMIO_TASKS_HAMMING_HPP
#include <string>
using std::string;
namespace hamming{
    int compute(string a, string b){
        int distance = 0;

        int counto = b.length();
        if (a.length() < b.length())
            counto = a.length();

        for (int i = 0; i < counto; i++)
        {
            if (a[i] != b[i])
                distance++;
        }
        return distance;
    }
}
#endif //EXERCISMIO_TASKS_HAMMING_HPP
