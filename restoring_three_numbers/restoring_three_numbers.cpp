#include <iostream>
#include <set>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    set<int> s;

    s.insert(x1);
    s.insert(x2);
    s.insert(x3);
    s.insert(x4);

    for (int a = 1; a < 1000; a++)
    {
        for (int b = a; b < 1000; b++)
        {
            for (int c = b; c < 1000; c++)
            {
                set<int> t;
                t.insert(a + b);
                t.insert(a + c);
                t.insert(b + c);
                t.insert(a + b + c);
                if (s == t)
                {
                    cout << a << " " << b << " " << c << endl;
                    return 0;
                }
            }
        }
    }

    cout << "ERROR: Didn't find solution." << endl;
    return 0;
}
