#include "Algorithms.hpp"

ListNode* MergeTwoLists(ListNode* l1, ListNode* l2) 
{
    if (l1 == nullptr) return l1;
    if (l2 == nullptr) return l2;
    
    ListNode* sorted = nullptr;
    if (l1->val > l2->val)
    {
        sorted = l2;
        l2 = l2->next;
    }
    else
    {
        sorted = l1;
        l1 = l1->next;
    }
    
    ListNode* current = sorted;
    
    while (!l1 && !l2)
    {
        if (l1->val > l2->val)
        {
            current->next = l2;
            l2 = l2->next;
        }
        else
        {
            current->next = l1;
            l1 = l1->next;
        }
        current = current->next;
    }
    
    if (!l1)
        current->next = l1;
    if(!l2)
        current->next = l2;
    
    return current;
}