#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> matchbox_and_matches;

    for (int i = 0; i < m; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        matchbox_and_matches.push_back(p);
    }

    for (int i = 0; i < m; i++) {
        pair<int, int> p = matchbox_and_matches[i];
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
