#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> answers(m);

    for (int i = 0; i < n; i++) {
        string answer;
        cin >> answer;
        for (int j = 0; j < m; j++) {
            answers[i] += answer[j];
        }
    }

    for (int i = 0; i < answers.length(); i++) {
        cout << answers[i] << endl;
    }

    vector<int> scores(m);
    for (int i = 0; i < m; i++) {
        cin >> scores[i];
    }

    for (int i = 0; i < scores.length(); i++) {
        cout << scores[i] << endl;
    }

    return 0;
}
