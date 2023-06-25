#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long;

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << "\n";
    return 0;
}
