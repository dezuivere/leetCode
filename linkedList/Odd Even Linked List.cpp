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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>a;
        vector<int>b;
         vector<int>b1;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<a.size();i++){
            if(i%2==0){
                b.push_back(a[i]);
            }else{
                b1.push_back(a[i]);
            }
        }
        for(int i=0;i<b1.size();i++){
            b.push_back(b1[i]);

        }
        ListNode *p=new ListNode(0);
        ListNode *ptr=p;
        for(int i=0;i<b.size();i++){
            p->next=new ListNode(b[i]);
            p=p->next;
        }
        return ptr->next;
        
        //using linked list
        // ListNode *p=new ListNode(0);
        // ListNode *q=new ListNode(0);
        // ListNode *p1=p;
        // ListNode *q1=q;
        // while(head!=nullptr){
        //     if(head->val%2==0){
        //         p->next=new ListNode(head->val);
        //         p=p->next;
        //     }else{
        //         q->next=new ListNode(head->val);
        //         q=q->next;
        //     }
        // }
        // p->next=q1;
        // return p1->next;
    }
};
