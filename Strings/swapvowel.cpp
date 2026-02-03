#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s) {
    string word = s;
    int n = s.length();
    int st = 0, ed = n - 1;
    string vowels = "aeiouAEIOU";

    while (st < ed) {
        while (st < ed && vowels.find(word[st]) == string::npos) {
            st++;
        }
        while (st < ed && vowels.find(word[ed]) == string::npos) {
            ed--;
        }
        swap(word[st], word[ed]);
        st++;
        ed--;
    }
    return word;
}

int main() {
    string s;
    cin >> s;

    cout << reverseVowels(s) << endl;
    return 0;
}
