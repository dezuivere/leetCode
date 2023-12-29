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
 #include<algorithm>
class Solution {
public:
   using Linked List
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *p = new ListNode(0); 
        ListNode *result = p;
        if(head==NULL){
            return head;
        }
        while(head!=nullptr){
            p->next=new ListNode(head->val);
            p=p->next;
            if(head->next!=nullptr){
                p->next=new ListNode(__gcd(head->val, head->next->val));
                p=p->next;
            }
            head=head->next;
        }
        result=result->next;
        return result;
    }
      //using vectors
     // ListNode* insertGreatestCommonDivisors(ListNode* head) {
    
     //     vector<int>a;
     //     vector<int>b;
     //     while(head!=NULL){
     //         a.push_back(head->val);
     //         head=head->next;
     //     }
     //     for(int i=0;i<a.size()-1;i++){
     //         b.push_back(a[i]);
     //         b.push_back(__gcd(a[i],a[i+1]));
     //     }
     //     b.push_back(a[a.size()-1]);
     //    ListNode *p = new ListNode(0); 
     //    ListNode *result = p;
     //    for(int i=0;i<b.size();i++){
     //        p->next=new ListNode(b[i]);
     //        p=p->next;
     //    }
     //    return result->next;
     // }
};
