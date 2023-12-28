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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *p=new ListNode(0);
        ListNode *q=p;
        int sum=0;
        head=head->next;
        while(head!=nullptr){
            if(head->val!=0){
                sum+=head->val;
            }else{
                p->next=new ListNode(sum);
                sum=0;
                p=p->next;
            }
            head=head->next;
        }
        return q->next;
    }
};
