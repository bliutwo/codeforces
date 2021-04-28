#include <bits/stdc++.h>
using namespace std;

void convert_time(string& timestring, int& h, int& m) {
    for (size_t i = 0; i < timestring.length(); i++) {
        char c = timestring[i];
        if (c != ':') {
            int digit = c - '0';
            if (i == 0) {
                h += 10 * digit;
            } else if (i == 1) {
                h += digit;
            } else if (i == 3) {
                m += 10 * digit;
            } else if (i == 4) {
                m += digit;
            }
        }
    }
}

int main() {
    string start;
    string end;
    cin >> start >> end;
    int h1, h2, m1, m2;
    h1 = h2 = m1 = m2 = 0;

    convert_time(start, h1, m1);
    convert_time(end, h2, m2);

    int time1, time2;

    time1 = (h1 * 60) + m1;
    time2 = (h2 * 60) + m2;

    int middle = (time1 + time2) / 2;

    int hour   = middle / 60;
    int minute = middle % 60;

    string first = "";
    string second = "";

    if (hour / 10 == 0) {
        first += '0';
    }

    if (minute / 10 == 0) {
        second += '0';
    }

    first += to_string(hour);
    second += to_string(minute);

    cout << first << ":" << second << endl;

    return 0;
}
