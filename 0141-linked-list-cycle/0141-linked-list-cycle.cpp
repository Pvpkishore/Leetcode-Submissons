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
    bool hasCycle(ListNode *head) {

        unordered_map<ListNode*,bool> m;

        ListNode* temp =head;

    while(temp!=NULL){

        if(m[temp]==true){
            //Already one time trversed so it exists once
            return true;
        }
        else{
            //otherwise mark it as true
            m[temp]=true;
        }
        temp=temp->next;
    }
        return false;
    }
};