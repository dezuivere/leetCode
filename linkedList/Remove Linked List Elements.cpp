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
        vector<int>a;
        vector<int>b;
       while(head!=nullptr){
           a.push_back(head->val);
           head=head->next;
       } 
       for(int i=0;i<a.size();i++){
           if(a[i]==val){
               b.push_back(i);
           }
       }
       for(int i=b.size()-1;i>=0;i--){
           a.erase(a.begin()+b[i]);
       }
       ListNode *p=new ListNode(0);
       ListNode *q=p;
       for(int i=0;i<a.size();i++){
           p->next=new ListNode(a[i]);
           p=p->next;
       }
       return q->next; 
    }
};