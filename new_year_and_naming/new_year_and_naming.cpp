#include <iostream>
#include <string>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    string S[n];
    for (int i = 0; i < n; i++)
    {
        cin >> S[i];
    }
    string T[m];
    for (int i = 0; i < m; i++)
    {
        cin >> T[i];
    }
    int q;
    cin >> q;
    int years[q];
    for (int i = 0; i < q; i++)
    {
        cin >> years[i];
    }

    for (int i = 0; i < q; i++)
    {
        int year = years[i];

        // originally had (year % n - 1) which was wrong
        int s = (year - 1) % n;
        int t = (year - 1) % m;
        string str = "";
        str += S[s];
        str += T[t];
        cout << str << endl;
    }

    return 0;
}
