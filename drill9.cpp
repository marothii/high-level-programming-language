#include "std_lib_facilities.h"

struct Date {
    int y;
    int m;
    int d;
};

Date today;

// helper functions:

void init_day(Date& dd, int y, int m, int d)
{
    //check that (y,m,d) is a valid date
    int yearMax = 3000, yearMin = 1700;
    if (y < yearMin || y > yearMax)
        cout << "Error, invalid year." << endl;
    else if (m < 1 || m > 12)
        cout << "Error, invalid month." << endl;
    else if (d < 1 || d > 31)
        cout << "Error, invalid day." << endl;
    // if it is, use to initialize dd
    else
    {
        dd.y = y;
        dd.m = m;
        dd.d = d;
    }

    return;
}

void add_day(Date& dd, int n)
{
    //increase dd by n days
    dd.d += n;
   
}

// Printing
ostream& operator<<(ostream& os, const Date& d)
{
    return os << d.d << "/" << d.m << "/" << d.y << endl;
}

int main()
{
    // set today to June 25, 1978
    init_day(today, 1978, 6, 25);
    cout << "Today: " << today;
   
    // set tomorrow
    add_day(today, 1);
    cout << "Tomorrow: " << today;

    // Invalid date test
    /*init_day(today, 1980, 13, -4);*/

    return 0;

}


