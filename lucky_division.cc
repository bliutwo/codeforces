#include <bits/stdc++.h>
using namespace std;

bool lucky(int n) {
    string s = to_string(n);
    for (char c : s) {
        if (c != '4' and c != '7') {
            return false;
        }
    }
    return true;
}

bool almost_lucky(int n) {
    if (n % 4 == 0 or n % 7 == 0 or n % 47 == 0 or n % 74 == 0 or n % 44 == 0 or n % 77 == 0 or n % 444 == 0 or n % 777 == 0 or n % 447 == 0 or n % 474 == 0 or n % 744 == 0 or n % 774 == 0 or n % 747 == 0 or n % 477 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    if (lucky(n) or almost_lucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
