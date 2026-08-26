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
        if(head==nullptr)
        return head;
        if(head->next==nullptr)
        {
            head=nullptr;
            return head; 

        }

        int size=0;
        ListNode *temp=head;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
       temp=head;
        int removing=size-n;


        if(removing==0)
        {   ListNode* todel=head;
            head=head->next;
            delete todel;
            return head;
        }
        for(int i =1; i<removing ; i++) 
        { 
            temp=temp->next;
        }
        ListNode* todel=temp->next;
        temp->next=todel->next;
        delete todel;
        return head;
    }
};
