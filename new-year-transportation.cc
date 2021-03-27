#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int cells[n];
    for (int i = 0; i < n; i++) {
        cin >> cells[i];
    }

    int target = t - 1;

    int curr = 0;
    while (curr <= target) {
        curr = curr + cells[curr];
    }

    if (curr == target) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
