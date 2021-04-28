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

    int num_matches = 0;

    for (int i = 0; i < m; i++) {
        if (n == 0) break;
        pair<int, int> p = matchbox_and_matches[i];
        if (p.first < n) {
            num_matches = num_matches + (p.first * p.second);
            n = n - p.first;
        } else {
            num_matches = num_matches + (n * p.second);
            n = 0;
        }
    }

    cout << num_matches << endl;

    return 0;
}
