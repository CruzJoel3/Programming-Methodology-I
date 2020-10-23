/*
Create a program that creates complex numbers, and allows them
to be added together 
*/

#include <iostream>
using namespace std;
class Complex_addition
{
 private:
 float x;
 float y;
 public:
 Complex_addition()
 {
 x=y=0;
 }
 Complex_addition(float RealInput, float ImInput)
 {
 x=RealInput;
 y=ImInput;
 }
 Complex_addition(Complex_addition &obj)
 {
 x=obj.x;
 y=obj.y;
 }
 Complex_addition add(Complex_addition c)
 {
 Complex_addition Add;
 Add.x = x + c.x;
 Add.y = y + c.y;
 return Add;
 }
 void out()
 {
 cout<<x<<"+"<<y<<"i"<<endl<<endl;
 }
 float getx() const
 {
 return x;
 }
 float gety() const
 {
 return y;
 }
};
int main()
{
float real1st;
float imag1st;
float real2nd;
float imag2nd;
cout<<"Real Part of First Number: ";
 cin>>real1st;
cout<<"Imaginary Part of First Number: ";
 cin>>imag1st;
Complex_addition obj1(real1st,imag1st); /* takes these inputs and passes them to
the Complex_addition member function that converts main function inputs into class variables*/
cout << endl;
obj1.out(); /* prints out "void out() function, which just adds "+" between the inputs
and adds an i to the second input*/
cout<<"Real Part of Second Number: ";
 cin>>real2nd;
cout<<"Imaginary Part of Second Number: ";
 cin>>imag2nd;
Complex_addition obj2(real2nd,imag2nd);
cout << endl;
obj2.out();
Complex_addition c;
c = obj1.add(obj2);
cout<<"Addition is: "<<c.getx()<<"+"<<c.gety()<<"i";
 return 0;
}
