/*
Please write a program that does the following:
-Ask the user to input the year
-Ask the user to input the month

Please output the number of days in this year and month (please note that you need to check whether the year is a leap year)
*/

#include <iostream>
#include <string>
using namespace std;

int main ()

{
    int year;
    string month;
    cout << "Enter a Year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "*This Year is a Leap Year: 366 Days*" << endl;
    }
    else
    {
        cout << "*This Year is not a Leap Year: 365.24 Days*" << endl;
    }
    cout << "Input a month[enter first three letter of the month in all lowercase]: ";
    cin >> month;
    if ((month == "jan") || (month == "mar") || (month == "may") || (month == 

"jul") || (month == "aug") || (month == "oct") || (month == "dec"))
{
    cout << "Number of days on the month " << month << " = " << "31 " << 

"In the year " << year << endl;
}
else if ((month == "apr") || (month == "jun") || (month == "sep") || (month 

== "nov"))

{
    cout << "Number of days on the month " << month << " = " << "30 " << 

"in the year " << year << endl;
}
if (month == "feb")
{
    if (year%4 == 0)
    {
        cout << "Number of days on the month " << month << " = " << "29 " 

<< "in the year " << year << endl;
    }
    else
    {
        cout << "Number of days on the month " << month << " = " << "28 " 

<< "in the year " << year << endl;
    }
}
}