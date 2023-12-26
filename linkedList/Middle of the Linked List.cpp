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
    ListNode* middleNode(ListNode* head) {
        vector<int> bits;
        while (head != nullptr) {
            bits.push_back(head->val);
            head = head->next;
        }
        int n=bits.size();
        ListNode* p = new ListNode(0);  

        ListNode* result = p;

        for (int i = n / 2; i < n; i++) {
            p->next = new ListNode(bits[i]);
            p = p->next;
        }

    return result->next; 
    }
};