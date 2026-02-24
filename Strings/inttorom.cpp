#include <iostream>
#include <vector>
using namespace std;

string intToRoman(int num) {
    string ans = "";

    vector<int> values = {
        1000,900,500,400,100,90,50,40,10,9,5,4,1
    };

    vector<string> symbol = {
        "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"
    };

    for(int i = 0; i < values.size(); i++) {
        while(num >= values[i]) {
            ans += symbol[i];
            num -= values[i];
        }
    }

    return ans;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Roman : " << intToRoman(num) << endl;

    return 0;
}
