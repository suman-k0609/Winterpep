/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     int findlength(ListNode* head){
//         int length=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             length++;
//             temp=temp->next;
//         }
//         return length;
//     }
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int lena=findlength(headA);
//         int lenb=findlength(headB);
//         ListNode* tempA=headA;
//         ListNode* tempB=headB;
//         int diff=abs(lena-lenb);

//         if(lenb>lena){
//             while(diff--){
//                 tempB=tempB->next;
//             }
//         }
//         else{
//              while(diff--){
//                 tempA=tempA->next;
//             }
//         }
//         while(tempA!=tempB){
//             tempA=tempA->next;
//             tempB=tempB->next;
//         }
//        return tempA;
//     }
// // };