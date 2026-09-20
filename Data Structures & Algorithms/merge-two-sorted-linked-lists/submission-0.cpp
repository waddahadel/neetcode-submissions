class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        int x;

        if (list1->val <= list2->val) {
            x = list1->val;
            list1 = list1->next;
        }
        else {
            x = list2->val;
            list2 = list2->next;
        }

        ListNode* result_list = new ListNode(x);
        ListNode* current = result_list;

        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                current->next = new ListNode(list1->val);
                list1 = list1->next;
            }
            else {
                current->next = new ListNode(list2->val);
                list2 = list2->next;
            }

            current = current->next;
        }

        if (list1 != nullptr) {
            current->next = list1;
        }
        else {
            current->next = list2;
        }

        return result_list;
    }
};