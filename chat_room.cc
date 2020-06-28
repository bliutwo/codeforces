#include <bits/stdc++.h>
using namespace std;

bool said_hello(string s) {
	string t = "hello";
	size_t after = 0;
	for (size_t i = 0; i < t.length(); i++) {
		char c = t[i];
		size_t found = s.find(c, after);
		if (found == string::npos) {
			return false;
		} else {
			after = found + 1;
		}
	}
	return true;
}

int main() {
    // solution here
    string s;
    cin >> s;
    if (said_hello(s)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
    return 0;
}
