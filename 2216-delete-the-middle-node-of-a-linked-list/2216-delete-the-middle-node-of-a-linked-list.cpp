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
    ListNode* deleteMiddle(ListNode* head) {
      
      ListNode* slow=head;
      ListNode* fast =head;
      ListNode* Middleprev =NULL;

      if(!head){
        return head;
      }
      if(head->next==NULL){
         head = NULL; 
         delete head;
         return head;
      }

      while(fast!=NULL){
        fast=fast->next;
         
         if(fast!=NULL){
            Middleprev = slow;
            slow=slow->next;
            fast=fast->next;
         }
      }

      Middleprev->next=slow->next;

      slow->next=NULL;

      delete slow;

    return head;
    }
};