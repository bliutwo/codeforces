#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr1) {
    int n = arr1.size();
    vector<int> arr2(n, 0);

    int lowestSoFar = INT_MAX;

    for (int i = 0; i < n; i++) {
        int val = arr1[i];
        if (val != 0) {
            if (val < lowestSoFar) {
                lowestSoFar = val;
            }
        }
        arr2[i] = lowestSoFar;
        if (lowestSoFar != INT_MAX) {
            lowestSoFar++;
        }
    }

    lowestSoFar = INT_MAX;

    for (int i = n - 1; i >= 0; i--) {
        int val = arr1[i];
        if (val != 0) {
            if (val < lowestSoFar) {
                lowestSoFar = val;
            }
        }
        if (lowestSoFar < arr2[i]) {
            arr2[i] = lowestSoFar;
        }
        if (lowestSoFar != INT_MAX) {
            lowestSoFar++;
        }
    }

    // print vals in arr2
    for (int i = 0; i < n; i++) {
        cout << arr2[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int q;
    cin >> q;
    while (q--) {
        int n, k;
        cin >> n;
        cin >> k;
        vector<int> locations;
        for (int i = 0; i < k; i++) {
            int location;
            cin >> location;
            locations.push_back(location-1);
        }

        vector<int> arr(n, 0);

        for (int i = 0; i < k; i++) {
            int temperature;
            cin >> temperature;
            arr[locations[i]] = temperature;
        }

        solve(arr);
    }
    return 0;
}
