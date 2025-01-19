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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);  // Dummy node to simplify result list creation
        ListNode* current = dummy;         // Pointer to build the result list
        int carry = 0;                     // Initialize carry to 0

        while(l1!=NULL || l2!=NULL || carry>0){


             int sum = carry;  // Start with the carry

         // Add the value from l1 if it exists
             if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
             }

             // Add the value from l2 if it exists
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
                
            //update carry and current node's value
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

       return dummy->next; 
    }
};