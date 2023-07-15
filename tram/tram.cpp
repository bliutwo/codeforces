#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int minCapacity{};
int currCapacity{};

void solve(int a, int b) {
    currCapacity -= a;
    minCapacity = max(minCapacity, currCapacity);
    currCapacity += b;
    minCapacity = max(minCapacity, currCapacity);
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    cout << minCapacity << "\n";
    return 0;
}
