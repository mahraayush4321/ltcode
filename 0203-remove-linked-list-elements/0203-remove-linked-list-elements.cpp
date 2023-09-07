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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=new ListNode(0);
        temp->next=head;
        ListNode *prev=temp;
        ListNode *current=head;
        while(current){
            if(current->val==val)
            {
                prev->next=current->next;
                delete current;
                current=prev->next;
            }else{
                prev=current;
                current=current->next;
            }
        }
        head=temp->next;
        delete temp;
        return head;
    }
};