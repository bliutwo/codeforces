#include <bits/stdc++.h>
#include <iostream>
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
    int m, n;
    cin >> m;
    cin >> n;
    int total = m * n;
    int solution = total / 2;
    cout << solution << endl;
    return 0;
}
