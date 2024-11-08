/*
    Santiago Guevara Idarraga
    Problem: 876 - Middle of the Linked List
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            ListNode *s = head, *f = head;
            while(f != nullptr && f->next != nullptr) {
                s = s->next;
                f = f->next->next;
            }
            return s;
        }
};