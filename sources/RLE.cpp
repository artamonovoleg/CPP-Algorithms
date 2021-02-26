#include <stdexcept>
#include "Algorithms.hpp"

bool IsCharValid(char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}

std::string RLE(const std::string& s)
{
    if (s.empty()) return std::string();

    std::string res;

    char prev = s.front();
    int counter = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (!IsCharValid(s[i]))
            throw std::runtime_error("Invalid string");

        if (prev == s[i])
        {
            counter++;
        }
        else
        {
            res += prev;
            if (counter > 1)
                res += (counter + '0');
            counter = 1;
        }
        prev = s[i];
    }

    res += prev;
    if (counter > 1)
        res += (counter + '0');
    
    return res;
}