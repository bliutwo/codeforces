#include <bits/stdc++.h>
using namespace std;

bool said_hello(string s) {
    string hello = "hello";
    bool too_soon = false;
    int curr = 0;
    for (char c : s) {
        if (c == hello[curr]) {
            curr++;
        } else {
            if (hello.find(c) != hello.end()) {
                string before(hello.begin(), hello.begin() + curr);
            }
        }
    }
    return curr == hello.length();
}

int main() {
    string s;
    cin >> s;
    if (said_hello(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
