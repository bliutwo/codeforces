#include <bits/stdc++.h>
using namespace std;

int main() {
    // solution here
    int s, n;
    cin >> s >> n;
    int x[n];
    int y[n];
    int indices[n];
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        indices[i] = i;
    }
    bool success = false;
    do {
        // do something
        for (int i = 0; i < n; i++) {
            int index = indices[i];
            if (x[index] > s) {
                break;
            } else {
                s += y[index];
                if (i == n - 1) {
                    success = true;
                }
            }
        }
        if (success)
            break;
    } while(next_permutation(indices, indices + n));
    if (success) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
