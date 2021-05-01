#include <bits/stdc++.h>
using namespace std;

// Make input and output more efficient.
ios::sync_with_stdio(0);
cin.tie(0);

int main() {
    // solution here
    // Newline character is faster because endl always causes a flush operation.
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        cout << n << k << endl;
    }
    return 0;
}
