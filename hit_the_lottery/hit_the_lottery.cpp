#include<iostream>
// #include<map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[] = {1, 5, 10, 20, 100};
    int num_bills = 0;
    cout << "index" << "\t" << "bill" << "\t" << "n";
    cout << "\t" << "num_bills" << endl;
    for (int i = 4; i >= 0; i--) {
        int bill = arr[i];
        while (n > bill) {
            cout << i << "\t" << bill << "\t" << n;
            cout << "\t" << num_bills << endl;
            n = n - bill;
            num_bills++;
        }
    }
    
    cout << num_bills << endl;
    return 0;
}
