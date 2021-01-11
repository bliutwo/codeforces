#include <bits/stdc++.h>
using namespace std;

struct dragon {
    int x;
    int y;
};

struct less_than_key
{
    inline bool operator() (const dragon& struct1, const dragon& struct2)
    {
        return (struct1.x < struct2.x);
    }
};

int main() {
    // solution here
    int s, n;
    cin >> s >> n;
    vector<dragon> dragons;

    for (int i = 0; i < n; ++i) {
        dragon d;
        cin >> d.x >> d.y;
        dragons.push_back(d);
    }

    sort(dragons.begin(), dragons.end(), less_than_key());

    bool success = true;

    for (size_t i = 0; i < dragons.size(); i++) {
        dragon d = dragons[i];
        if (s > d.x) {
            s += d.y;
        } else {
            success = false;
            break;
        }
    }

    if (success) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
