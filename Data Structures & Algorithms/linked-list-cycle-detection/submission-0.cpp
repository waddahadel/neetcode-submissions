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
    bool hasCycle(ListNode* head) {
        // just loop and return
        vector<ListNode*> nodes;
        while(head){
            // if this node is already in the vector, we immediately return true cause there is a cycle
            if(find(nodes.begin(),nodes.end() , head) != nodes.end()) {
                return true;
            }
            // else we push the node to the vector and move on
            nodes.push_back(head);
            head = head->next;
        }

        // otherwise just return false
        return false;
    }
};
