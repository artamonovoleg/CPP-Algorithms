#pragma once

#include <vector>
#include <string>

std::string RLE(const std::string& s);

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* CreateList(const std::vector<int>& nums);
ListNode* MergeTwoLists(ListNode* l1, ListNode* l2);


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