#pragma once

#include <vector>

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