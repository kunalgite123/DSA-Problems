#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val = x;
        next = NULL;
    }
};

ListNode* reverseList(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;

    while(curr != NULL){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void printList(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
}

int main(){
    int n;
    cin >> n;

    ListNode* head = NULL;
    ListNode* tail = NULL;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        ListNode* node = new ListNode(x);

        if(head == NULL){
            head = node;
            tail = node;
        }else{
            tail->next = node;
            tail = node;
        }
    }

    head = reverseList(head);
    printList(head);

    return 0;
}
