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
        ListNode* currA=headA;
        while(currA!=NULL){

        ListNode* currB=headB;
        //int lenA=0;
        //int lenB=0;
        while(currB!=NULL){
            if(currA==currB){
                return currA;
            }
            currB=currB->next;
     
        }

        currA=currA->next;
       
        }
        return 0;
    }
};