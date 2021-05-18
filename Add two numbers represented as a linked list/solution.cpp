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
    ListNode* addTwoNumbers(ListNode* p1, ListNode* p2) {
        auto ret = new ListNode(0);
        int carry = 0;
        auto pret = ret;
        while(p1 || p2){
            int a,b;
            if(p1) a = p1->val; else a = 0;
            if(p2) b = p2->val; else b = 0;
            int sum = a + b + carry;
            carry = sum/10;
            pret->next = new ListNode(sum%10);
            pret = pret->next;
            if(p1) p1 = p1->next;
            if(p2) p2 = p2->next;
        }
        if(carry)pret->next = new ListNode(carry);
        return ret->next;
    }
};