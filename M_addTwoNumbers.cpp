// https://leetcode.com/problems/add-two-numbers/description/
// level - medium
// 2. Add Two Numbers

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry=0, value=0, digit1=0, digit2=0;
        ListNode* head = new ListNode();
        ListNode* temp = head;

        while(l1!=NULL || l2!=NULL || carry!=0){

            digit1 = (l1!=NULL) ? l1->val : 0;
            digit2 = (l2!=NULL) ? l2->val : 0;

            value = digit1 + digit2 + carry;
            carry = value/10;

            ListNode* newNode = new ListNode(value % 10);
            temp->next = newNode;
            temp = newNode;

            l1 = (l1!=NULL) ? l1->next : NULL;
            l2 = (l2!=NULL) ? l2->next : NULL;

        }
       
        ListNode* result = head->next;
        delete head;
        return result;
    }
};

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

//         int carry=0, value=0, digit1=0, digit2=0;
//         ListNode* head = new ListNode(0);
//         ListNode* temp = head;

//         while(l1!=NULL || l2!=NULL){

//             digit1 = (l1!=NULL) ? l1->val : 0;
//             digit2 = (l2!=NULL) ? l2->val : 0;

//             if(digit1 + digit2 + carry > 9){
//                 value = digit1 + digit2 + carry - 10;
//                 carry = 1;
//             }
//             else{
//                 value = digit1 + digit2 + carry;
//                 carry = 0;
//             }

//             ListNode* newNode = new ListNode(value);
//             temp->next = newNode;
//             temp = newNode;

//             l1 = (l1!=NULL) ? l1->next : NULL;
//             l2 = (l2!=NULL) ? l2->next : NULL;

//         }
        
//         if(carry == 1){
//             ListNode* newNode = new ListNode(1);
//             temp->next = newNode;
//             temp = newNode;
//         }

//         ListNode* result = head->next;
//         delete head;
//         return result;
//     }
// };

void printList(ListNode* list){
    cout<<"inside print func"<<endl;
    ListNode* temp = list;
    while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
    cout<<endl;
}

int main(){
    Solution obj;
    
    ListNode x6(9);
    ListNode x5(9,&x6);
    ListNode x4(2,&x5);
    ListNode x3(4,&x4);
    ListNode x2(7,&x3);
    ListNode x1(5,&x2);

    ListNode y4(7);
    ListNode y3(5,&y4);
    ListNode y2(5,&y3);
    ListNode y1(9,&y2);
    
    printList(&x1);
    printList(&y1);
    ListNode* ans = obj.addTwoNumbers(&x1,&y1);
    printList(ans);
}