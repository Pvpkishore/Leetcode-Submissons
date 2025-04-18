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

       ListNode* dummy = new ListNode(0, head); // Dummy node for edge cases

       ListNode* second = dummy;
       ListNode* first = dummy;

       
       for(int i=1;i<=n+1;i++){
         first=first->next;
       }

       // Move both pointers until first reaches the end
        while (first) {
            first = first->next;
            second = second->next;  //second stops just before the nth node
        }
        
        // Remove the nth node from end
        second->next = second->next->next;
        return dummy->next;
        
    }
};