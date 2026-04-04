#include <vector>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void NextGreater(vector<int> arr, vector<int>& ans){
    stack<int> s;
    int idx = arr.size() - 1;

    ans[idx] = 0;
    s.push(arr[idx]);

    for(idx = idx - 1; idx >= 0; idx--){
        int curr = arr[idx];

        while(!s.empty() && curr >= s.top()){
            s.pop();
        }

        if(s.empty()){
            ans[idx] = 0;
        } else {
            ans[idx] = s.top();
        }

        s.push(curr);
    }
}

vector<int> nextLargerNodes(ListNode* head) {
    vector<int> arr;
    ListNode* temp = head;

    while(temp != nullptr){
        arr.push_back(temp->val);
        temp = temp->next;
    }

    vector<int> ans(arr.size());
    NextGreater(arr, ans);
    return ans;
}
