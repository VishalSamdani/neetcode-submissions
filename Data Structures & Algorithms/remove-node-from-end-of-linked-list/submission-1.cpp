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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;

        int cnt = 0;

        while(temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }

        if(cnt == n)
        {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }

        int rem = cnt - n;
        temp = head;

        

        while(temp)
        {
            rem--;

            if(rem == 0)
            {
                break;
            }

            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
        
    }
};
