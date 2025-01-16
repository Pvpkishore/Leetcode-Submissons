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


    ListNode* GetMiddle(ListNode* head,ListNode* &Middlenodekaprev){
      ListNode* slow= head;
      ListNode* fast =head;

      while(fast!=NULL){
        fast=fast->next;

        if(fast!=NULL){
            fast=fast->next;
            Middlenodekaprev = slow;
            slow=slow->next;
        }
      }
      return slow;

    }
    ListNode* ReverseList(ListNode* &prev ,ListNode* &curr){
        while(curr!=NULL){

            ListNode *forward = curr->next;
            curr->next =prev;
            prev=curr;
            curr=forward;
        }
        return prev;
     }
    
    bool isPalindrome(ListNode* head) {

        if(head==NULL){
            //LL is empty
            return true;
        }

        if(head->next ==NULL){
            //LL is single
            return true;
        }
        
        ListNode* firsthalfhead = head;
        //travel till the middle node and break into two halves
        ListNode* Middlenodekaprev =NULL;

        ListNode* Middlenode = GetMiddle(head ,Middlenodekaprev);
         //break
        Middlenodekaprev -> next = NULL;

        //reverse the second half
        ListNode* prev =NULL;
        ListNode* curr = Middlenode;
        ListNode* secondhalfHead = ReverseList(prev,curr);

        //compare both halfs to decide true or false

        ListNode* temphead1 = firsthalfhead;
        ListNode* temphead2 = secondhalfHead;

        while(temphead1!=NULL){
            if(temphead1->val != temphead2->val ){

                return false;
            }
            else{
                temphead1 =temphead1->next;
                temphead2 =temphead2->next;

            }
        }

        return true;





        
        
    }
};