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

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0,num;
        vector<int>arr;
        while(l1!=nullptr && l2!=nullptr){
            if(c==0){
                int sum=l1->val+l2->val;
                if(sum>9){
                    while(sum!=1){
                        num=sum%10;
                        sum=sum/10;
                    }
                    arr.push_back(num);
                    c=1;
                }else{
                    arr.push_back(sum);
                    c=0;
                }
            }else{
                int sum=l1->val+l2->val+1;
                if(sum>9){
                    while(sum!=1){
                         num=sum%10;
                        sum=sum/10;

                    }
                    arr.push_back(num);
                    c=1;
                }else{
                    arr.push_back(sum);
                    c=0;
                }
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            int sum=l1->val+c;
            if(sum>9){
                while(sum!=1){
                         num=sum%10;
                        sum=sum/10;

                    }
                    arr.push_back(num);
                    c=1;
            }else{
                arr.push_back(sum);
                c=0;
            }
           l1=l1->next; 
        }
        while(l2!=nullptr){
            int sum=l2->val+c;
            if(sum>9){
                while(sum!=1){
                        num=sum%10;
                        sum=sum/10;

                    }
                    arr.push_back(num);
                    c=1;
            }else{
                arr.push_back(sum);
                c=0;
            }
            l2=l2->next;
        }
        if(c==1){
            arr.push_back(1);
        }
        ListNode* p = new ListNode(0);  

        ListNode* result = p;
        for(int i=0;i<arr.size();i++){
            p->next = new ListNode(arr[i]);
            p = p->next;
        }
        return result->next; 
    }
};