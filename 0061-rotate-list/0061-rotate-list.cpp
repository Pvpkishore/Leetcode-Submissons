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
    ListNode* rotateRight(ListNode* head, int k) {

      ListNode* tail = head;
      int length =1;

    if(head==NULL || head->next ==NULL) return head;

        while(tail->next){
            tail=tail->next;
            length++;
        }

        tail->next = head;

        k = k % length;
        int stepstonewtail = length - k;
        ListNode* newtail = head;

        for(int i=1;i<stepstonewtail;i++){
            newtail = newtail->next;
        }

       ListNode* newhead = newtail->next;
       newtail->next = NULL;

        return newhead;
    }
};