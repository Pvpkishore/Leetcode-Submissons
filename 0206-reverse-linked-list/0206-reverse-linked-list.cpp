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
 //Recursive aproach
//    ListNode* reverseList(ListNode* &prev,ListNode* &curr){
      

//       //Base case
//       if(curr==NULL){
//         //curr value is null so it stopped there now head is prev
//         return prev;
//       }

//       ListNode* forward = curr->next;

//       curr->next = prev;

//       prev = curr;

//       curr = forward;

//       return reverseList(prev,curr);
//    }
    ListNode* reverseList(ListNode* head) {

        // ListNode* prev = NULL; 
        // ListNode* curr = head;
        // ListNode* newHead = reverseList(prev,curr);
        // return newHead;

        //iterative Approach

        ListNode* prev =NULL;
        ListNode* curr =head;

        while(curr!=NULL){
             
             ListNode* forward = curr->next;

             curr->next = prev;
             prev = curr;
             curr = forward;

        }

        return prev;
    }
};