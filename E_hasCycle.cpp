// https://leetcode.com/problems/linked-list-cycle/description/
// level - easy
// 141. Linked List Cycle

#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *i = head;           
        ListNode *j = head;
        while(j!=NULL and j->next!=NULL){
            i = i->next;
            j = j->next->next;
            if(i == j) return true;
        }           
        return false;

        // unordered_set<ListNode*> s;
        // while(head != NULL){
        //     if(s.find(head) != s.end())
        //         return true;
        //     s.insert(head);
        //     head = head->next;    
        // }
        // return false;
    }
};