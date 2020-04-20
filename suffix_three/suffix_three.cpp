#include <iostream>
#include <string_view>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string testcases[n];

    for (int i = 0; i < n; i++)
    {
        cin >> testcases[i];
    }

    for (int i = 0; i < n; i++)
    {
        string s = testcases[i];
        if (s.ends_with("po"))
            cout << "FILIPINO" << endl;
        else if (s.ends_with("mnida"))
            cout << "KOREAN" << endl;
        else
            cout << "JAPANESE" << endl;
    }

    return 0;
}
