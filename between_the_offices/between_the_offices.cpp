#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int seattle_to_sf = 0;
    int sf_to_seattle = 0;
    for (int i = 0; i < n - 1; i++)
    {
        char origin = s[i];
        char destination = s[i+1];
        if (origin == 'S' and destination == 'F')
            seattle_to_sf++;
        else if (origin == 'F' and destination == 'S')
            sf_to_seattle++;
    }
    if (seattle_to_sf > sf_to_seattle)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
