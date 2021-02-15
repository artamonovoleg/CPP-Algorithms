#pragma once

template <typename T>
void Swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <typename It>
void IterSwap(It x, It y)
{
    Swap(*x, *y);
}

template <typename It>
void Reverse(It first, It last)
{
    if (last == first) return;

    --last;
    while (first < last)
    {
        IterSwap(first, last);
        ++first;
        --last;
    }
    
}

template <typename It>
bool NextPermutation(It first, It last)
{
    It i, ii;
    i = last;
    ii = i - 1;

    if (first == last) return false;
    if (first == --i) return false;

    while (true)
    {
        if (*--ii < *i)
        {
            It l = last;
            while (*--l < *ii);
            IterSwap(l, ii);
            Reverse(i, last);
            return true;
        }
        
        --i;

        if (first == ii)
        {
            Reverse(first, last);
            return false;
        }
    }
}