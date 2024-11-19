/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 22801 - Doom's Day Algorithm
 * Required: frequency limit: 1.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3170
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {

    int cases;
    int month, day;
    string weekday[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday",
        "Sunday"};
    int daysOfNonLeapYear[12] = {
        31, 28, 31,
        30, 31, 30,
        31, 31, 30,
        31, 30, 31};

    cin >> cases;

    // 2010/12/31: Friday
    // 2022/12/31: Saturday
    while (cases--) {
        cin >> month >> day;

        int dayCount = 4;

        for (int i = 0; i < month - 1; i++)
            dayCount += daysOfNonLeapYear[i];

        dayCount = (dayCount + day) % 7;
        cout << weekday[dayCount] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int n, m, d, s;
    while (cin >> n) {
        for (int cs = 0; cs < n; cs++) {
            int s = 0;
            cin >> m >> d;
            for (int i = 1; i < m; i++)
                s += days[i];
            s += d;
            cout << day[s % 7] << endl;
        }
    }
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int month, day, weekDay;
    string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // 2011 1/10, 2/21, 4/4, 5/9, 6/6, 7/11,
    // 8/8, 9/5, 10/10 , 11/7 and 12/12 are Mondays.
    // 3/1 is Tuesday
    int mondays[12] = {10, 21, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> month >> day;

        month--; // to fit the index of array

        weekDay = (day - mondays[month] + 35) % 7;

        cout << week[weekDay] << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 30};
    int n = 0;
    cin >> n;
    while (n--) {
        int m = 0, d = 0;
        cin >> m >> d;
        int res_day = 4; // 因為2010年最後一天為星期5對應至day陣列的index則是4
        // 加上前面月份的天數
        for (int i = 1; i < m; i++) {
            res_day += daysOfMonth[i - 1];
        }
        res_day = (res_day + d) % 7; // 加上該月份天數也就是d並mod7得出正確的day index
        cout << day[res_day] << endl;
    }
}