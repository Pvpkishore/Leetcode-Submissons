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
//     // using Brute Force approach
//  ListNode* sortList(ListNode* head){
//     // Create a vector to
//     // store node values
//     vector<int> arr;
    
//     // Temporary pointer to
//     // traverse the linked list
//     ListNode* temp = head;
    
//     // Traverse the linked list and
//     // store node values in the vector
//     while(temp!=NULL){
//         arr.push_back(temp->val);
//         temp = temp->next;
//     }
    
//     // Sort the array
//     // containing node values
//     sort(arr.begin(), arr.end());
    
//     // Reassign sorted values to
//     // the linked list nodes
    
//     temp = head;
//     for(int i = 0; i < arr.size(); i++){
//         // Update the node's data
//         // with the sorted values
//         temp->val = arr[i]; 
//         // Move to the next node
//         temp = temp->next; 
//     }
    
//     // Return the head of the
//     // sorted linked list
//     return head; 
// }
//Recursive Approach
// Function to split the list into two halves
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != nullptr) {
            prev->next = nullptr; // Disconnect the first half from the second
        }
        return slow;
    }

    // Merge two sorted lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->val < l2->val) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    // Sort the list using merge sort
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) {
            return head; // Base case: empty list or single node
        }

        // Split the list into two halves
        ListNode* middle = findMiddle(head);

        // Recursively sort both halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(middle);

        // Merge the two sorted halves
        return merge(left, right);
    }
};