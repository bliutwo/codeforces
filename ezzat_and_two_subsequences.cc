#include <bits/stdc++.h>
using namespace std;

void solve(int n, int& arr[n]) {
    cout << "{ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "}" << endl;
}

int main() {
    // Make input and output more efficient.
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        solve(n, arr);
    }
    return 0;
}
