#include<iostream>
#include<string>
using namespace std;

void solve(string s) {
    unordered_set<char> red;
    unordered_set<char> green;

    for (char c: s) {

    }
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
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
