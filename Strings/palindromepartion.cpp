#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
        string s2 = s;
        reverse(s2.begin(),s2.end());

        return s==s2;

    }
    void getPart(string s,vector<vector<string>>&ans,vector<string>&partitions){

        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }


        for(int i = 0; i<s.size(); i++){
            string part = s.substr(0,i+1);

            if(isPalindrome(part)){
                partitions.push_back(part);
                getPart(s.substr(i+1),ans,partitions);
                partitions.pop_back();
            }
        }
    }
int main(){
     string s = "aab";
    vector<vector<string>> ans;
    vector<string> partitions;

    getPart(s, ans, partitions);

       for(int i = 0; i< ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
