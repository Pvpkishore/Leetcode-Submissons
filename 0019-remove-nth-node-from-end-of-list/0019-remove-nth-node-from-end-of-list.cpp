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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

       ListNode* dummy = new ListNode(0); // Dummy node for edge cases 
       dummy->next = head;

       ListNode* slow = dummy;
       ListNode* fast = dummy;

       
       for(int i=1;i<=n+1;i++){
           fast=fast->next;
       }

       // Move both pointers until first reaches the end
        while (fast) {
            fast = fast->next;
            slow = slow->next;  //second stops just before the nth node
        }

        // Remove the nth node from end
        slow->next = slow->next->next;
        return dummy->next;

    }
};