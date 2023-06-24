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
    int a = 0;
    int b = 0;
    int c = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            a++;
        } else if (s[i] == '2') {
            b++;
        } else if (s[i] == '3') {
            c++;
        }
    }
    string ans = "";
    int count = 0;
    int total = a + b + c;
    for (int i = 0; i < a; i++) {
        ans += '1';
        count++;
        if (count < total) {
            ans += '+';
        }
    }
    for (int i = 0; i < b; i++) {
        ans += '2';
        count++;
        if (count < total) {
            ans += '+';
        }
    }
    for (int i = 0; i < c; i++) {
        ans += '3';
        count++;
        if (count < total) {
            ans += '+';
        }
    }
    cout << ans << "\n";
    return 0;
}
