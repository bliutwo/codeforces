#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char curr = s[0];
    int count = 1;
    bool dangerous = false;
    for (int i = 1; i < s.length(); i++) {
        if (curr != s[i]) {
            curr = s[i];
            count = 1;
        } else {
            count++;
            if (count > 6) {
                dangerous = true;
                break;
            }
        }
    }
    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}