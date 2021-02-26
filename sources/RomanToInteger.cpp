#include "Algorithms.hpp"

int GetArabic(char ch)
{
    switch (ch)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return -1;
}

int RomanToInteger(const std::string& s)
{
    int res = 0;
    
    if (s.empty()) return 0;
    
    int prev = GetArabic(s[0]);
    res += prev;
    
    for (int i = 1; i < s.size(); ++i)
    {
        int curr = GetArabic(s[i]);
        if (curr > prev)
            res -= prev * 2;
        prev = curr;
        res += curr;
    }
    
    return res;
}