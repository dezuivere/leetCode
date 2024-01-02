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
    bool isPalindrome(ListNode* head) {
        vector<int>a;
        while(head!=NULL){
            a.push_back(head->val);
            head=head->next;
        }
        int j=a.size()-1;
        for(int i=0;i<a.size()/2;i++){
            if(a[i]!=a[j]){
                return 0;
            }
            j--;
        }
        return 1;
    }
};
