#include <iostream>
#include <bits/stdc++.h>
// #include <set>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    vector<int> v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    v.push_back(x4);

    sort(v.begin(), v.end());

    // REAL ANSWER: Do math to find the values of a, b, and c
    //  AAAAAAAND you need to sort the input because you need them all to be positive.

    // int a = 0.5 * (x1 + x2 - x3);
    // int b = 0.5 * (x1 - x2 + x3);
    // int c = 0.5 * (x3 - x1 + x2);
    
    // int a = x1 - x4 + x2;
    // int b = x4 - x2;
    // int c = x2 + x3 - x4;

    // int a = x4 - x3;
    // int b = x4 - x2;
    // int c = x4 - x1;

    int a = v[3] - v[2];
    int b = v[3] - v[1];
    int c = v[3] - v[0];
    
    cout << a << " " << b << " " << c << endl;

    // set<int> s;

    // s.insert(x1);
    // s.insert(x2);
    // s.insert(x3);
    // s.insert(x4);


    // for (int a = 1; a < 1000; a++)
    // {
    //     for (int b = a; b < 1000; b++)
    //     {
    //         for (int c = b; c < 1000; c++)
    //         {
    //             set<int> t;
    //             t.insert(a + b);
    //             t.insert(a + c);
    //             t.insert(b + c);
    //             t.insert(a + b + c);
    //             if (s == t)
    //             {
    //                 cout << a << " " << b << " " << c << endl;
    //                 return 0;
    //             }
    //         }
    //     }
    // }

    // cout << "ERROR: Didn't find solution." << endl;
    

    return 0;
}
