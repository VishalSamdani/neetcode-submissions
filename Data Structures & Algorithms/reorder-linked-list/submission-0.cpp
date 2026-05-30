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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* temp = slow->next;
        ListNode* prev = NULL;
        slow->next = NULL;

        while(temp != NULL)
        {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        ListNode* t1 = head;
        ListNode* t2 = prev;

        while(t1 != NULL && t2 != NULL)
        {
            ListNode* first = t1->next;
            ListNode* sec = t2->next;

            t1->next = t2;
            t2->next = first;

            t1 = first;
            t2 = sec;
        }
    }
};
