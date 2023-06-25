#include <bits/stdc++.h>
using namespace std;

void solve(long long n) {
    int numDigits{};
    int numLuckyDigits{};
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            numLuckyDigits++;
        }
        n /= 10;
        numDigits++;
    }
    if (numLuckyDigits == 4 || numLuckyDigits == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    long long n;
    cin >> n;
    solve(n);
    return 0;
}
