#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_vectors;
    cin >> num_vectors;
    vector<vector<int>> v(num_vectors, vector<int>(3, 0));
    for (int i = 0; i < num_vectors; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }
    int x{};
    int y{};
    int z{};
    for (int i = 0; i < num_vectors; i++) {
        x += v[i][0];
        y += v[i][1];
        z += v[i][2];
    }
    if (x == 0 and y == 0 and z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
