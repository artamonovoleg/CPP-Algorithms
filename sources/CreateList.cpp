#include "Algorithms.hpp"

ListNode* CreateList(const std::vector<int>& nums)
{
    ListNode* list = new ListNode [nums.size()];
    for (size_t i = 0; i < nums.size(); i++)
    {
        list[i].val = nums[i];
        list[i].next = &list[i + 1];
    }

    list[nums.size() - 1].next = nullptr;

    return list;
}