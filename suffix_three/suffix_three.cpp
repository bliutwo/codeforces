#include <iostream>
#include <string_view>
#include <string>
using namespace std;

// https://stackoverflow.com/questions/874134/find-out-if-string-ends-with-another-string-in-c
bool hasEnding(string s, string ending)
{
    if (s.length() >= ending.length())
    {
        return (0 == s.compare(s.length() - ending.length(), ending.length(), ending));
    } else {
        return false;
    }
}

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
        if (hasEnding(s, "po"))
            cout << "FILIPINO" << endl;
        else if (hasEnding(s, "mnida"))
            cout << "KOREAN" << endl;
        else
            cout << "JAPANESE" << endl;
    }

    return 0;
}
