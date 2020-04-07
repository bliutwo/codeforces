#include <iostream>
#include <bits/stdc++.h>
// #include <set>
using namespace std;

int main() {
    // REAL ANSWER: Do math to find the values of a, b, and c
    //  AAAAAAAND you need to sort the input because you need them all to be positive.

    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    vector<int> v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    v.push_back(x4);

    sort(v.begin(), v.end());

    int a = v[3] - v[2];
    int b = v[3] - v[1];
    int c = v[3] - v[0];
    
    cout << a << " " << b << " " << c << endl;

    return 0;
}
