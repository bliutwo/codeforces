#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sticks[n];
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
    }
    sort(sticks, sticks + n);
    long long a = 0;
    long long b = 0;
    for (int i = 0; i < n/2; i++) {
        a += sticks[i];
    }
    for (int i = n/2; i < n; i++) {
        b += sticks[i];
    }
    cout << a * a + b * b << endl;
    return 0;
}
