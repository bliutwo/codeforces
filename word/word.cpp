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
    string s;
    cin >> s;
    unordered_set<char> alphabet;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (size_t i = 0; i < alpha.size(); i++) {
        alphabet.insert(alpha[i]);
    }
    int numLower{};
    int numUpper{};
    for (size_t i = 0; i < s.size(); i++) {
        if (alphabet.find(s[i]) == alphabet.end()) {
            // not in alphabet - upper
            numUpper++;
        } else {
            numLower++;
        }
    }
    if (numLower >= numUpper) {
        for (size_t i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    } else {
        for (size_t i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
    }

    cout << s << "\n";
    return 0;
}
