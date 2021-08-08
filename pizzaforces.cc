#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve(int n, vector<int>& slices, vector<int>& times,
           priority_queue <int, vector<int>, greater<int>>& pq,
           int totalTime) {
    if (n == 0) {
        pq.push(totalTime);
        return;
    }
    for (int i = 0; i < slices.size(); i++) {
        int remainder = n - slices[i];
        if (remainder < 0) {
            pq.push(totalTime + times[i]);
        } else {
            solve(remainder, slices, times, pq, totalTime + times[i]);
        }
    }
}

int main() {
    // Make input and output more efficient.
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int t;
    cin >> t;
    vector<int> slices = {6, 8, 10};
    vector<int> times = {15, 20, 25};
    while (t--) {
        int n;
        cin >> n;
        priority_queue <int, vector<int>, greater<int> > pq;
        int totalTime = 0;
        solve(n, slices, times, pq, totalTime);
        cout << pq.top() << endl;
    }
    return 0;
}
