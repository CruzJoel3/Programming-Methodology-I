/* 
Write a program that inputs three integers from the keyboard, 
and prints the sum, average, product, smallest, and largest 
if these numbers. 
*/

#include <iostream>

using namespace std;

int main (){

int one;
int two;
int three;
int x; // x = greater
int y; // y = least
cout << "Input three different integers: ";
cin >> one;
cin >>two;
cin >>three;

if (one < two)
{
    x = two;
    y = one;
}
else
{
    x = one;
    y = two;
}

if (x < three)
{
    x = three;
}
if (y > three)
{
    y = three;
}
cout << "Sum is " << one + two + three << endl;
cout << "Average is " << (one + two + three)/3 << endl;
cout << "Product is " << one*two*three << endl;
cout << "Smallest is " << y << endl;
cout << "Largest is " << x << endl;


}