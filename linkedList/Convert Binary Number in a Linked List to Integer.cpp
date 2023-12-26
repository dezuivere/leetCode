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
 #include<vector>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
          vector<int> bits;

        // Traverse the linked list and store bits in the vector
        while (head != nullptr) {
            bits.push_back(head->val);
            head = head->next;
        }
         int result = 0;
        for (int i = 0; i < bits.size(); ++i) {
            result = result * 2 + bits[i];
        }

        return result;
    }
};