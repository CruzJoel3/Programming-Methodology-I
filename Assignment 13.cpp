/*
A palindrome is a word, phrase, number or other 
sequence of characters which reads the same both 
backward and forward. Write a program that will 
take an input from user and check if it is a 
palindrome or not.
*/

#include <iostream>

using namespace std;

int main (){

string input;
string rev;
cout << "Enter a phrase of words or numbers to see if it is a palindrome:\n";
cin >> input;

cout << "Input = " << input << endl;
signed int length = -1;

for (int i = 0; input[i] != '\0';i++)
{
    length++;
}

cout << "Length = " << length<< endl;

int cop = length;
for (int j = 0; j <= length;j++)
{
    rev[j] = input[cop];
    cop--;
}

cout << "Reversed = ";

for (int k = 0; k <= length;k++)
{
     cout << rev[k];
}
int q = 0;
for (int u = 0; u <= length; u++){
    if (input[u] != rev[u])
        {
          cout << "\nThis phrase is not a palindrome :(\n";
          break;
        }
    else if (input[u] == rev[u])
        {
            q++;
        }
    if (q == length)
    {
        cout << "\nThis phrase is a palindrome!\n";
    }

}
return 0;
}