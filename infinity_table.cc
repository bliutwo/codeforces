#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(ll n) {
    ll squareRoot = sqrt(n);
    ll firstSquareRootGreater = squareRoot + 1;
    ll square = pow(firstSquareRootGreater, 2);
    ll first = pow(firstSquareRootGreater - 1, 2);
    ll diffSquare = square - n;
    ll diffFirst = n - first;
    bool closerToFirst = diffFirst < diffSquare;
    ll r;
    ll c;
    ll cornerVal = first + firstSquareRootGreater;
    if (closerToFirst) {
        // cout << "closerToFirst\n";
        // cout << "cornerVal: " << cornerVal << "\n";
        c = firstSquareRootGreater;
        r = firstSquareRootGreater - (cornerVal - n);
    } else {
        cout << "closerToSquare\n";
        r = firstSquareRootGreater;
        c = 1 + (square - n);
    }
    cout << r << " " << c << "\n";
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}
