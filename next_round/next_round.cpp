#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long;

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> scores;
    while (n--) {
        int score;
        cin >> score;
        scores.push_back(score);
    }
    int limiting_score = scores[k - 1];
    int num_passing = 0;
    for (int i = 0; i < scores.size(); i++) {
        if (scores[i] > 0 && scores[i] >= limiting_score) {
            num_passing++;
        }
    }
    cout << num_passing << endl;
    return 0;
}
