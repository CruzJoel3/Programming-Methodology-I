/*
Write a program that inputs a five-digit number, seperates that number into
its individual digits and prints the digits seperated from one another by 
three spaces each
*/

#include <iostream>

using namespace std;

int main (){

int number;

cout << "Enter a 5-digit number: ";
cin >> number;
int fifth = number % 10;
int fourth = (number % 100)/10;
int third = (number % 1000)/100;
int second = (number % 10000)/1000;
int first = (number % 100000)/10000;

cout << first << "   " << second << "   " << third << "   " << fourth << "   " << fifth << endl;




}