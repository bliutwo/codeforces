#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> v = {'a', 'e', 'i', 'o', 'u', 'y'};
    unordered_set<char> vowels(v.begin(), v.end());
    string result{};
    for (char t : s) {
        char c = tolower(t);
        if (vowels.find(c) == vowels.end()) {
            result += '.';
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}
