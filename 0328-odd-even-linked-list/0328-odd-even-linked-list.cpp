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
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head || !head->next) return head; // Edge case: 0 or 1 node

        ListNode* odd =head;
        ListNode* even=head->next;
        ListNode* Evenhead=even;// Save the head of the even list
    
         // Traverse the list and separate odd and even nodes
        while(even!=NULL && even->next!=NULL){

            odd->next =even->next;       // Move odd pointer to the next odd node
            even->next=even->next->next; // Move even pointer to the next even node


            odd=odd->next;     // Advance odd pointer
            even=even->next;  // Advance even pointer

        }

        odd->next=Evenhead; // Connect the odd list to the head of the even list

        return head;
    }
};