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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        // If either list is empty, no intersection
        if(headA==NULL || headB==NULL) return nullptr;
        
        ListNode* pointerA = headA;
        ListNode* pointerB = headB;

        while(pointerA!=pointerB){
            // Move pointerA and pointerB; switch to the other list when reaching the end
            pointerA = pointerA ? pointerA->next : headB;
            pointerB = pointerB ? pointerB->next : headA;
        
        }
         // Either both pointers meet at the intersection or both become null
        return pointerA;
    }
};