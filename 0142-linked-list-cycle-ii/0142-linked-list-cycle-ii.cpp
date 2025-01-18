/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow =head;
        ListNode* fast =head;

        if(!head || !head->next) return nullptr;

        while(fast!=NULL){

            fast=fast->next;

            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
            if(fast==slow){
                break;
            }
        }

        if(fast==NULL || fast->next==NULL) return nullptr;
         
         // Step 2: Find the starting node of the cycle
         slow = head;

         while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
         }

         return slow; // This is the starting node of the cycle

    }
};