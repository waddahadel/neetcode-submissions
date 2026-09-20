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
    ListNode* reverseList(ListNode* head) {
        
        // current node we are working with is the head node
        ListNode* current = head;

        // set the previous ptr to nullptr to start with
        ListNode* previous_node = nullptr;

        // as long as we have not reached the end, we do the following
        while(current){
            // save the original next node
            ListNode* next_node = current->next;

            // make the current node point to the previous
            current->next = previous_node;

            // update the current node and the previous node accordingly
            previous_node = current;
            current = next_node;
            
        }
        return previous_node;
    }
};
