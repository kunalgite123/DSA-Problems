#include <bits/stdc++.h>
using namespace std;


int maxprofit(vector<int>prices){
    int Max = 0;
    int start = prices[0];

    for(int i = 1; i<prices.size(); i++){
        if(start<prices[i]){
            Max+= prices[i]-start;
        }
        start =prices[i];
    }
    cout<<"max profit : "<<Max;
}

int main(){
    vector<int>prices = {1,2,3,4,5};
    maxprofit(prices);
    return 0;

}
