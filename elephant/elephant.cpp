#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void solve(int n) {
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int x;
    cin >> x;
    int ans{};
    ans = x / 5;
    if (x % 5 != 0) {
	ans++;
    }
    cout << ans << "\n";
    return 0;
}
