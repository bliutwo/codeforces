#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> suffix_to_language;

    suffix_to_language["po"] = "FILIPINO";
    suffix_to_language["desu"] = "JAPANESE";
    suffix_to_language["masu"] = "JAPANESE";
    suffix_to_language["mnida"] = "KOREAN";

    string testcases[n];

    for (int i = 0; i < n; i++)
    {
        cin >> testcases[i];
    }

    map<string, string>::iterator it;
    for (int i = 0; i < n; i++)
    {
        string s = testcases[i];
        string filipino_suffix = s.substr(s.length() - 2, s.length());
        it = suffix_to_language.find(filipino_suffix);
        if (it != suffix_to_language.end())
        {
            cout << suffix_to_language[filipino_suffix] << endl;
            continue;
        }
        string japanese_suffix = s.substr(s.length() - 4, s.length());
        it = suffix_to_language.find(japanese_suffix);
        if (it != suffix_to_language.end())
        {
            cout << suffix_to_language[japanese_suffix] << endl;
            continue;
        }
        string korean_suffix = s.substr(s.length() - 5, s.length());
        it = suffix_to_language.find(korean_suffix);
        if (it != suffix_to_language.end())
        {
            cout << suffix_to_language[korean_suffix] << endl;
            continue;
        }
    }

    return 0;
}
