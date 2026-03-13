#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int daysInMonth(int year, int month) {
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && isLeap(year)) return 29;
    return days[month-1];
}

int dateToDays(int y, int m, int d) {
    int days = d;

    for (int i = 1; i < m; i++)
        days += daysInMonth(y, i);

    for (int i = 1; i < y; i++)
        days += isLeap(i) ? 366 : 365;

    return days;
}

int main() {
    string date1, date2;

    cout << "Enter first date (YYYY-MM-DD): ";
    cin >> date1;

    cout << "Enter second date (YYYY-MM-DD): ";
    cin >> date2;

    int y1, m1, d1, y2, m2, d2;

    sscanf(date1.c_str(), "%d-%d-%d", &y1, &m1, &d1);
    sscanf(date2.c_str(), "%d-%d-%d", &y2, &m2, &d2);

    int days1 = dateToDays(y1, m1, d1);
    int days2 = dateToDays(y2, m2, d2);

    cout << "Total days between: " << abs(days2 - days1) << endl;

    return 0;
}