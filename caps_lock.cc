#include <bits/stdc++.h>
using namespace std;

bool only_uppercase(string s) {
	for (char c : s) {
		if (islower(c)) {
			return false;
		}
	}
	return true;
}

bool uppercase_except_first(string s) {
	if (isupper(s[0])) {
		return false;
	}
	for (size_t i = 1; i < s.length(); i++) {
		if (islower(s[i])) {
			return false;
		}
	}
	return true;
}

string switched(string s) {
	for (size_t i = 0; i < s.length(); i++) {
		if (isupper(s[i])) {
			s[i] = tolower(s[i]);
		} else {
			s[i] = toupper(s[i]);
		}
	}
	return s;
}

int main() {
    // solution here
    string s;
    cin >> s;
    bool all_caps = false;
    for (size_t i = 0; i < s.length(); i++) {
		if (only_uppercase(s) or uppercase_except_first(s)) {
			all_caps = true;
		}
	}
	if (all_caps) {
		cout << switched(s) << endl;
	} else {
		cout << s << endl;
	}
    return 0;
}
