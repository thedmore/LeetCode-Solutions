// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
// level -easy 
// Remove Duplicates from Sorted List

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;  
        while(temp != NULL){
            if(temp->next != NULL && temp->val == temp->next->val){
                ListNode* dup = temp->next;
                temp->next=temp->next->next;
                
                dup->next=NULL;
                delete dup;
            }
            else
                temp=temp->next;
        }
        return head;
    } 
    void insertAtTail(ListNode* &, int);   
    void displayList(ListNode*);   
};

void Solution::insertAtTail(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    if(head==NULL)
        head=newNode;

    ListNode* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next = newNode;
    newNode->next = NULL;    
}

void Solution::displayList(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    } 
    cout<<"NULL"<<endl;
}

int main(){
    Solution s;
    ListNode* head=NULL;
    s.insertAtTail(head,1);
    s.insertAtTail(head,1);
    s.insertAtTail(head,2);
    s.insertAtTail(head,3);
    s.insertAtTail(head,3);
    
    s.displayList(head);
    ListNode* head1 = s.deleteDuplicates(head);
    s.displayList(head1);
}