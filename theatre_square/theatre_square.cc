#include <iostream>
using namespace std;

int main() {
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int n_num = n / a;
    if (n % a != 0)
        n_num++;
    long long int m_num = m / a;
    if (m % a != 0)
        m_num++;
    cout << n_num * m_num << endl;
    return 0;
}