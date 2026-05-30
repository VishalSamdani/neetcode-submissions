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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int cnt1 = 0;
        int cnt2 = 0;

        while(tempA)
        {
            cnt1++;
            tempA = tempA->next;
        } 

        while(tempB)
        {
            cnt2++;
            tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB; 

        while(cnt1 > cnt2)
        {
            cnt1--;
            tempA = tempA->next;
        }  

        while(cnt2 > cnt1)
        {
            cnt2--;
            tempB = tempB->next;
        }  

        while(tempA != tempB)
        {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return tempA;    
    }
};