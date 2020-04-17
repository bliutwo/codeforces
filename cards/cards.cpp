#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    string s;
    
    cin >> n;
    cin >> s;

    int num_n = 0;
    int num_z = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == 'n')
            num_n++;
        else if (c == 'z')
            num_z++;
    }
    string output = "";
    
    for (int i = 0; i < num_n; i++)
    {
        output += "1 ";
    }
    for (int i = 0; i < num_z; i++)
    {
        output += "0 ";
    }

    cout << output << endl;
    return 0;
}
