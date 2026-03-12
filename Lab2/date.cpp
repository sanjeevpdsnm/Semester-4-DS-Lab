#include <iostream>
#include <string>
using namespace std;

int main() {

    string date1, date2;

    cout << "Enter first date (YYYY-MM-DD): ";
    cin >> date1;

    cout << "Enter second date (YYYY-MM-DD): ";
    cin >> date2;

    int y1, m1, d1;
    int y2, m2, d2;

    y1 = (date1[0]-'0')*1000 + (date1[1]-'0')*100 + (date1[2]-'0')*10 + (date1[3]-'0');
    m1 = (date1[5]-'0')*10 + (date1[6]-'0');
    d1 = (date1[8]-'0')*10 + (date1[9]-'0');


    y2 = (date2[0]-'0')*1000 + (date2[1]-'0')*100 + (date2[2]-'0')*10 + (date2[3]-'0');
    m2 = (date2[5]-'0')*10 + (date2[6]-'0');
    d2 = (date2[8]-'0')*10 + (date2[9]-'0');

    cout << "First date parsed: " << y1 << "-" << m1 << "-" << d1 << endl;
    cout << "Second date parsed: " << y2 << "-" << m2 << "-" << d2 << endl;

    int daysMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int leap1 = 0;
    if (y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0))
        leap1 = 1;

    int leap2 = 0;
    if (y2 % 400 == 0 || (y2 % 4 == 0 && y2 % 100 != 0))
        leap2 = 1;

        
    if (m1 < 1 || m1 > 12 || d1 < 1 || d1 > daysMonth[m1-1]) {
        if (!(m1 == 2 && leap1 == 1 && d1 == 29)) {
            cout << "Invalid first date!" << endl;
            return 1;
        }
    }

    if (m2 < 1 || m2 > 12 || d2 < 1 || d2 > daysMonth[m2-1]) {
        if (!(m2 == 2 && leap2 == 1 && d2 == 29)) {
            cout << "Invalid second date!" << endl;
            return 1;
        }
    }

    int days1 = d1;
    int days2 = d2;

    for(int i = 1; i < m1; i++) {
        days1 += daysMonth[i-1];
        if(i == 2 && leap1 == 1)
            days1 += 1;
    }

    for(int i = 1; i < m2; i++) {
        days2 += daysMonth[i-1];
        if(i == 2 && leap2 == 1)
            days2 += 1;
    }

    for(int i = 1; i < y1; i++) {
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            days1 += 366;
        else
            days1 += 365;
    }

    for(int i = 1; i < y2; i++) {
        if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            days2 += 366;
        else
            days2 += 365;
    }

    int diff;
    if(days1 > days2)
        diff = days1 - days2;
    else
        diff = days2 - days1;

    cout << "Total days between: " << diff << endl;

    return 0;
}