/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
         ListNode* temp=new ListNode();
        ListNode* r=temp;
     while(h1!=NULL && h2!=NULL){
       
        if(h1!=NULL && h2!=NULL && h1->val<=h2->val){
                temp->next=h1;
                temp=temp->next;
                h1=h1->next;}
        if(h2!=NULL && h1!=NULL && h1->val>h2->val){
            temp->next=h2;
            temp=temp->next;
            h2=h2->next;
        }}
        if(h2!=NULL){temp->next=h2;}
        if(h1!=NULL){temp->next=h1;}
        
     r=r->next;
     return r;

    }
};