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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // one pointer to the current node
        ListNode* current = head;

        // counter to get where we at and such
        int num_nodes = 0;

        // count them
        while(current != nullptr){
            // increase the nodes number
            num_nodes++;

            // update the pointer
            current = current->next;
        }

        // now we have the total num of nodes and n , we remove the node at num - n
        int to_be_removed = num_nodes - n;

        // if it's the first node , then point to null and we are done
        if(to_be_removed == 0) return head->next;

        // otherwise we have to look for it, reset current to head again
        current = head;

        //we loop
        for(int i = 0; i < to_be_removed; ++i){
            // if the next index is the one to be removed, we do it and such
            if((i+1) == to_be_removed){
                // removed it
                current->next = current->next->next;
                break;
            }
            // advance current
            current = current->next;
        }

        return head;
    }
};
