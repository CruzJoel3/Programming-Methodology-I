  
/*
Write a function that takes an integer value and returns the 
number with its digits reversed. For example, given the number 
7631, the function should return 1367
*/


#include <iostream>

using namespace std;

void backwards(int *x);

int main (){

int x;

cout << "Enter a number between 1 and 9999: ";
cin >> x;

if ((x > 9999) || (x < 1))
{
    cout << "Invalid input!\n";
}
backwards(&x);

cout << "The number with its digits reversed is: " << x << endl;
}

void backwards(int *x){

int a = *x/1000;
int b = *x/100;
int p = (b%10)*10;
int c = *x/10;
int j = (c%10)*100;
int d = *x/1;
int i = (d%10)*1000;

if (*x >= 1000)
{
    *x = a + p + j + i;
}

else if ((*x > 99) && (*x <= 999))
{
    *x = (p + j + i)*0.1;
}

else if ((*x > 9) && (*x <= 99))
{
    *x = (j + i)*0.01;
}

else
{
    *x = d;
}
}