#include <iostream>

using namespace std;

//Takes an year and returns true if the year is a leap year
bool isLeap(int year)
{
    if (year % 4 == 0 && year % 100)
        return 1;
    else if (year % 400 == 0 && year % 100 == 0)
        return 1;
    return 0;
}

//Return the number of days in a given month from a given year
int nDays(int year, int month)
{
    if (month == 2)
    {
        if (isLeap(year))
            return 29;
        else
            return 28;
    }
    else if (month <= 7)
    {
        if (month % 2)
            return 31;
        return 30;
    }
    else
    {
        if (month % 2)
            return 30;
        return 31;
    }
}

//Takes a date and returns an integer corresponding to
//the day of the week that date refers to
int weekDayNumber(int year, int month, int day)
{
    int c;
    switch (month)
    {
    case 1:
        if (isLeap(year))
            c = 6;
        else
            c = 0;
        break;
    case 2:
        if (isLeap(year))
            c = 2;
        else
            c = 3;
        break;
    case 3:
        c = 3;
        break;
    case 4:
        c = 6;
        break;
    case 5:
        c = 1;
        break;
    case 6:
        c = 4;
        break;
    case 7:
        c = 6;
        break;
    case 8:
        c = 2;
        break;
    case 9:
        c = 5;
        break;
    case 10:
        c = 0;
        break;
    case 11:
        c = 3;
        break;
    case 12:
        c = 5;
        break;
    }
    return ((5 * (year % 100) / 4) + c + day - 2 * ((year / 100) % 4) + 7) % 7;
}

//Takes an integer that represents a day of the week
//and returns a string with that day
string weekDay(int year, int month, int day)
{
    int ds = weekDayNumber(year, month, day);
    switch (ds)
    {
    case 0:
        return "Saturday";
    case 1:
        return "Sunday";
    case 2:
        return "Monday";
    case 3:
        return "Tuesday";
    case 4:
        return "Wednesday";
    case 5:
        return "Thursday";
    case 6:
        return "Friday";
    }
    return "";
}

//Takes an integer that represents a month
//and returns a string with that month
string getMonth(int month)
{
    switch (month)
    {
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    }
    return "";
}

//Prints a table with the days of a certain month
void printMonth(int year, int month)
{
    int day = 1; //day of the month
    cout << getMonth(month) << "/" << year << endl;
    cout << "Sun  Mon  Tue  Wed  Thy  Fri  Sat\n";

    while (day <= nDays(year, month))
    {
        for (int i = 1; i <= 6; i++) //iterate through the week
        {
            cout << " ";
            if (weekDayNumber(year, month, day) == i)
            {
                if (day < 10)
                    cout << " ";
                cout << day;
                day++;
                //check if the end of the month was reached
                if (day > nDays(year, month)) 
                    return;
            }
            else
                cout << "  ";
            cout << "  ";
        }
        if (day < 10)
            cout << " ";
        cout << day; //as Saturday = 0, we have to output it separately
        day++;
        cout << endl;
    }
}

int main()
{
    int year;
    cout << "Choose a year: ";
    cin >> year;
    //iterate through the months of the year
    for (int month = 1; month <= 12; month++) 
    {
        printMonth(year, month);
        cout << endl;
        cout << "_________________________________\n";
    }
    return 0;
}