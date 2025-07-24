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
 bool isPalindrome(ListNode* head) {  

        if (!head || !head->next) return true;
    //     //1.Find the middle Node
    //     ListNode* slow = head;
    //     ListNode* fast = head;

    //     while(fast!=NULL){
    //         fast=fast->next;
    //         if(fast!=NULL){
    //             slow=slow->next;
    //             fast=fast->next;
    //         }
    //     }

    //     //2. Reverse Second half
    //     ListNode* prev = nullptr;
    //     while(slow){
    //         ListNode* forward = slow->next;
    //         slow->next = prev;
    //         prev = slow;
    //         slow = forward;
    //     }

    //     //3.Compare Both Halves
    //     ListNode* left = head;
    //     ListNode* right = prev;
    //     while(right){
    //         if(left->val!=right->val){
    //             return false;
    //         }
    //         left = left->next;
    //         right = right->next;
    //     }

    // return true;

    ListNode* dummy = head;
    string s ="";
    string Sreversed;

    while(dummy!=NULL){
        s+=dummy->val;
        dummy = dummy->next;
    }

    Sreversed = s;
    reverse(Sreversed.begin(),Sreversed.end());

      return s==Sreversed;
    }
};