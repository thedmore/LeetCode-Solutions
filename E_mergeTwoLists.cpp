// https://leetcode.com/problems/merge-two-sorted-lists/
// level - easy


#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}    //First case
    ListNode(int x) : val(x), next(nullptr) {}    //Second case 
    ListNode(int x, ListNode *next) : val(x), next(next) {}    //Third case
};

void insertAtTail(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    if(head==NULL)
        head = newNode;

    ListNode* temp = head; 
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = NULL;       
}

void displayList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

ListNode* newList(ListNode* head, ListNode* head1){
    // ListNode* cur = new ListNode(0);
    ListNode* head2;
    
    if(head == NULL)
        return head1;
    if(head1 == NULL)
        return head;

    if(head->val <= head1->val){
        head2 = head;
        head = head->next;
    }
    else{
        head2 = head1;
        head1 = head1->next;
    }    
    ListNode* cur = head2;
    
    while(head != NULL && head1 != NULL){
        if(head->val <= head1->val){
            cur->next = head;
            head = head->next;
        }
        else{
            cur->next = head1;
            head1 = head1->next;
        }
        cur = cur->next;
    }

    while(head != NULL){
        cur->next = head;
        head = head->next;
        cur = cur->next;
    }

    while(head1 != NULL){
        cur->next = head1;
        head1 = head1->next;
        cur = cur->next;
    }

    return head2;   
}

int main()
{
    ListNode* head = NULL;
    insertAtTail(head,-9);
    insertAtTail(head,3);
    // insertAtTail(head,5);
    // insertAtTail(head,6);
    displayList(head);

    ListNode* head1 = NULL;
    insertAtTail(head1,5);
    insertAtTail(head1,7);
    // insertAtTail(head1,5);
    // insertAtTail(head1,7);
    // insertAtTail(head1,9);
    displayList(head1);

    ListNode* mergedList = newList(head,head1);
    displayList(mergedList);
}