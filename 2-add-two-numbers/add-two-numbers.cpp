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
    // void Complete_list()
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>ans;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;
        while(temp1!=NULL&&temp2!=NULL){
            int sum=temp1->val+temp2->val+carry;
            carry=0;
            if(sum>9){
                int k=sum%10;
                carry=(sum-k)/10;
                sum=k;
            }
            ans.push_back(sum);// 7 0 8
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            int sum=temp1->val+carry;
            carry=0;
            if(sum>9){
                int k=sum%10;
                carry=(sum-k)/10;
                sum=k;
            }
            ans.push_back(sum);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            int sum=temp2->val+carry;
            carry=0;
            if(sum>9){
                int k=sum%10;
                carry=(sum-k)/10;
                sum=k;
            }
            ans.push_back(sum);
            temp2=temp2->next;
        }
        if(carry>0) ans.push_back(carry);
        ListNode* answer=new ListNode(ans[0]);
        ListNode* ref=answer;
        for(int i=1;i<ans.size();i++){
           ListNode* temp=new ListNode(ans[i]);
           ref->next=temp;
           ref=temp;
            cout<<ans[i]<<" ";
        }
       
        return answer;
    }
};