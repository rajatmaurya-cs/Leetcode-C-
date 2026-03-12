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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* q=head;
        int count=0;
        while(q!=NULL){
            count++;
            q=q->next;
        }
        ListNode* a=head;
        int s=0;
        while(s<(count/2)){
            s++;
            a=a->next;

        }
        return a;
    }
};