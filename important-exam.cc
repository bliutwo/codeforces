#include <bits/stdc++.h>
using namespace std;

int most_frequent_letter_count(string s) {
    map<char, size_t> counts;
    for (size_t i = 0; i < s.length(); i++) {
        if (counts.find(s[i]) != counts.end()) {
            counts[s[i]]++;
        } else {
            counts[s[i]] = 1;
        }
    }
    return (*max_element(
                begin(counts), end(counts),
                [] (const pair<char, size_t> a, const pair<char, size_t> b) {
                    return a.second < b.second;
                }
            )).second;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> answers(m);

    for (int i = 0; i < n; i++) {
        string answer;
        cin >> answer;
        for (int j = 0; j < m; j++) {
            answers[j] += answer[j];
        }
    }

    vector<int> scores(m);
    for (int i = 0; i < m; i++) {
        cin >> scores[i];
    }

    int score = 0;

    for (int i = 0; i < m; i++) {
        score = score + (most_frequent_letter_count(answers[i]) * scores[i]);
    }

    cout << score << endl;

    return 0;
}
