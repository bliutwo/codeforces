#include <bits/stdc++.h>
using namespace std;

int main() {
    // solution here
    int n, m;
    cin >> n >> m;
    int numNames[n];
    for (int i = 0; i < n; i++) {
        cin >> numNames[i];
    }
    int position = 0;
    int pagesTurnedEachDay[n];
    for (int i = 0; i < n; i++) {
        int namesToday = numNames[i];
        int pagesTurnedToday = namesToday / m;
        position = position + namesToday;
        if (position % m == 0)
            pagesTurnedToday++;
        pagesTurnedEachDay[i] = pagesTurnedToday;
    }
    for (int i = 0; i < n; i++) {
        cout << pagesTurnedEachDay[i] << " ";
    }
    cout << endl;
    return 0;
}
