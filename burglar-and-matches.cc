#include <bits/stdc++.h>
using namespace std;

bool sort_by_second_in_pair(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> matchbox_and_matches;

    for (int i = 0; i < m; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        matchbox_and_matches.push_back(p);
    }

    // sort vector descending (big to small) by second element in pair
    sort(matchbox_and_matches.begin(), matchbox_and_matches.end(), sort_by_second_in_pair);

    for (int i = 0; i < m; i++) {
        pair<int, int> p = matchbox_and_matches[i];
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
