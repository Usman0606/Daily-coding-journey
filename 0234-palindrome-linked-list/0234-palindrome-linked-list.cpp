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
     ListNode* reverseList(ListNode* head) {
       
        if(head==NULL || head->next==NULL){
            return head;

        }
        ListNode*newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;

  
    }
    bool isPalindrome(ListNode* head) {
     // Copy the original linked list
     if(head==NULL || head->next==NULL){
        return head;
     }
        ListNode* copyHead = new ListNode(head->val);
        ListNode* temp = head->next;
        ListNode* copyTail = copyHead;

        while (temp != NULL) {
            copyTail->next = new ListNode(temp->val);
            copyTail = copyTail->next;
            temp = temp->next;
        }

        // Reverse the copied linked list
        ListNode* reversed = reverseList(copyHead);

        // Compare original and reversed lists
        ListNode* a = head;
        ListNode* b = reversed;

        while (a != NULL && b != NULL) {
            if (a->val != b->val) {
                return false;
            }

            a = a->next;
            b = b->next;
        }

        return true;
    }
};