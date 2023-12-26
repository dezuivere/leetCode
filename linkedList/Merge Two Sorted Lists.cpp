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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p=new ListNode(0);
        ListNode *ptr=p;
        while(list1!=nullptr&&list2!=nullptr){
            if(list1->val<=list2->val){
                p->next=new ListNode(list1->val);
                list1=list1->next;
            }else{
                p->next=new ListNode(list2->val);
                list2=list2->next;
            }
            p=p->next;
        }
        while(list1!=NULL){
            p->next=new ListNode(list1->val);
            list1=list1->next;
            p=p->next;
        }
        while(list2!=NULL){
            p->next=new ListNode(list2->val);
            list2=list2->next;
            p=p->next;
        }
        return ptr->next;
    }
};