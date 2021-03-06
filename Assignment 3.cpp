/*
Develop a C++ program that uses a while statement to determine the 
gross pay for each of several employees

- The company pays �straight time� for the first 40 hours worked by each employee and pays �time-and-a-half� for all hours worked in excess of 40 hours. 

-You are given a list of the employees of the company, the number of hours each employee worked last week and the hourly rate of each employee
*/

#include <iostream>

using namespace std;

int main (){

int hours;
float rate;
float salary;
int overtime;

while (hours != 1)
{
    cout << "Enter hours worked (-1 to end): ";
    cin >> hours;
if (hours == -1)
    break;
    cout << "Enter hourly rate of the worker ($00.00): ";
    cin >> rate;
if (hours > 40)
{
    overtime = hours - 40;
    hours = 40;
    salary = ((hours*rate) + ((rate*1.5)*overtime));
    cout << "Salary is " << salary << endl;
}
else
{
    salary = (hours*rate);
    cout << "Salary is " << salary << endl;
}
}




}