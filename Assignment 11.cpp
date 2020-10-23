/*The greatest common divisor (GCD) of two integers is the largest integer that evenly divides into each of the two integers. 

Write a function gcd that returns the greatest common divisor of two integers.*/


#include <iostream>

using namespace std;

int GCD(int, int);

int main()
{
    int num1;
    int num2;
    cout << "Enter first integer (enter -1 to escape): ";
    cin >> num1;
    GCD(num1 , num2);
}
int GCD(int num1, int num2)
{
    int gcd;
    while (num1 != -1)
    {
    cout << "Enter second integer: ";
    cin >> num2;
    for (int x=1;x <=num1 && x <=num2;x++)
    {
        if(num1 % x ==0 && num2 % x ==0)
        {
        gcd=x;
        }
    }
    cout << "The GCD = " << gcd << endl;
    cout << "Enter first integer (enter -1 to escape): ";
    cin >> num1;
    }
    cout << "You escaped the program... Goodbye" << endl;
    return 0;
}
