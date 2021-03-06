/*
Use while statements when applicable to solve the following problems.

a) Write a program that reads a nonnegative integer and computes and prints its factorial.
b) Write a program that estimates the value of the mathematical constant e, with a number of decimal points for the estimate being selected from the user

*/
#include <iostream>
#include<iomanip>

using namespace std;

int factorial(int x);
double efinder(int y);

int main (){

int x;
int y;
cout << "Enter the a nonnegative integer you'd like to find the factorial for: ";
cin >>x;

cout << "Factorial = " << factorial(x)<< endl;

cout << "Enter the desired accuracy for the calculation of e: ";
cin >> y;

cout << "e^" << y << fixed << setprecision(y) << " = " << efinder(y) << endl;
}

int factorial (int x){

int k = x-1;

while (k != 0)
{
    x = x*k;
    k--;
}

return x;
}

double efinder(int y){

double e = 1.000;

while (y != 0)
{
    e = e + 1.000/(factorial(y));
    y--;
}
return e;
}