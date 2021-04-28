#include <bits/stdc++.h>
using namespace std;

int main() {
    // solution here
    int n, m;
    cin >> n >> m;
    int tasks[m];
    for (int i = 0; i < m; i++) {
        cin >> tasks[i];
    }
    int i = 1; // current house index
    int j = 0; // current task index
    int time = 0;
    while (j < m) {
        if (tasks[j] == i)
            j++;
        i++;
        time++;
        if (i == n)
            i = 1;
    }
    cout << time << endl;
    return 0;
}
