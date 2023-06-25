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
    int k, n, w;
    cin >> k >> n >> w;
    int total{};
    for (int i = 1; i <= w; i++) {
	total += k * i;
    }
    if (total - n < 0) {
        cout << 0 << "\n";
	return 0;
    }
    cout << total - n << "\n";
    return 0;
}
