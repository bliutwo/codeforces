#include <iostream>
using namespace std;

int main () {
    int num_queries;
    cin >> num_queries;
    int a[num_queries];
    for (int i = 0; i < num_queries; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < num_queries; i++)
    {
        int num_matches = a[i];
        int additional;
        if (num_matches > 2 and num_matches % 2 == 0)
        {
            additional = 0;
        } else {
            int first = num_matches / 2;
            int sum = first + 1;
            int total = sum + first + 1;
            additional = total - num_matches;
        }
        a[i] = additional;
    }
    
    for (int i = 0; i < num_queries; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
