// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* curr=head;
//         int count=0;
//         while(curr!=NULL && count<k){
//             curr=curr->next;
//             count++;
//         }
//         if(count==k){
//             ListNode* prevnode=NULL;
//             ListNode* currnode=head;
//             ListNode* nextnode=NULL;
//             int count2=0;
//             while(count2<k){
//                 nextnode=currnode->next;
//                 currnode->next=prevnode;
//                 prevnode=currnode;
//                 currnode=nextnode;
//                 count2++;

//             }
//             head->next=reverseKGroup(curr,k);
//             return prevnode;
//         }
//         return head;
//     }
// };