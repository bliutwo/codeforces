#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num_a = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            num_a++;
    }
    if (float(num_a) / s.length() > 0.5)
        cout << s.length() << endl;
    else {
        int length = s.length();
        while (float(num_a) / length <= 0.5)
            length--;
        cout << length << endl;
    }
    return 0;
}
