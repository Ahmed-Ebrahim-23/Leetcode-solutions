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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode();
        ListNode* ans = temp;
        while(l1 || l2){
            int sum = temp->val, carry=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }

            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            
            if(sum>9){
                sum=sum%10;
                carry=1;
                temp->next = new ListNode(carry);
            }
            cout << sum << "";
            temp->val = sum;
            if(l1 || l2)
                temp->next = new ListNode(carry);
                temp = temp->next;
        }
        return ans;
    }
};