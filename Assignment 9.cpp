/*
Write a program that reads in the size of the side of a square 
and then prints a hollow square of that size out of
asterisks and blanks. Your program should work for 
squares of all side sizes between 1 and 20. 
*/

#include <iostream>

using namespace std;

int main (){

int enter;
int x = 0;
int y = 0;

cout << "Enter length of side: ";
cin >> enter;


while (x != enter)
{
    cout << "*";
    x++;
}
x = 0;

while (x != enter-2)
{
    y = 0;
    cout <<"\n*";
    while (y != enter-2)
    {
    cout << " ";
    y++;
    }
    cout <<"*";
    x++;
}
x = 0;
cout <<"\n";
while (x != enter)
{
    cout << "*";
    x++;
}
}