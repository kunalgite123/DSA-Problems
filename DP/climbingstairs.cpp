#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
    vector<int> tab(n + 1, 0);

    tab[0] = 1;
    tab[1] = 1;

    for (int i = 2; i <= n; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
    }

    return tab[n];
}

int main() {
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "Total ways to climb stairs: " << climbStairs(n) << endl;

    return 0;
}
