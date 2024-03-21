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
    ListNode * findNode(ListNode *temp, int k){
        // ListNode *temp=head;
        k-=1;
       while(temp && k>0){
        k--;
        temp=temp->next;
       }
       return temp;
    }
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
         if (!head || k == 1) {
            return head;
        }
        ListNode *next=NULL,*prev=NULL;
        while(temp){
            ListNode *kth=findNode(temp,k);
            if(!kth){
                if(prev){
                    prev->next=temp;
                }
                break;
            }
            next=kth->next;
            kth->next=NULL;
            reverse(temp);
            if(temp==head){
                head=temp;
            }
            else{
                prev->next=kth;
            }
            prev=temp;
            temp=next;
        }
        return head;
    }
};
