#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// delete node function (LeetCode logic)
void deleteNode(ListNode* node) {
    ListNode* curr = node->next;
    node->val = curr->val;
    node->next = curr->next;

    // optional: memory free (good practice)
    delete curr;
}

// helper: print list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val;
        if(head->next) cout << " -> ";
        head = head->next;
    }
    cout << "\n";
}

int main() {
    
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Before: ";
    printList(head);

    // Suppose we want to delete node with value 5
    ListNode* nodeToDelete = head->next;

    deleteNode(nodeToDelete);

    cout << "After:  ";
    printList(head);

    return 0;
}
