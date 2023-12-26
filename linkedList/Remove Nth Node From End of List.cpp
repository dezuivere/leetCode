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
        ListNode *p=head;
        vector<int>a;
        while(head!=nullptr){
            a.push_back(head->val);
            head=head->next;
        }
        int len=a.size()-n;
        a.erase(a.begin() + len);
        ListNode *ans=new ListNode(0);
        ListNode *a1=ans;
        for(int i=0;i<a.size();i++){
            ans->next=new ListNode(a[i]);
            ans=ans->next;
        }
        return a1->next;
    }
};