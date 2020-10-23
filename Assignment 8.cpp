/*
Create a program who generates a random number between 1 and 1000, and let's the user guess [and keep guessing] what the number is. With each attempt, the user should be told if thier guess is too large or too small
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int kp (int);
int main()
{
    int guess;
    cout << "I have a number between 1 and 1000" << endl;
    cout << "Can you guess my number?" << endl;
    cout << "Please type your first guess: ";
    cin >> guess;
    kp (guess);
}
int kp(int guess)
{   srand(time(0));
    int myNum = 1 + (rand()%1000);
    while (guess != myNum)
    {
    if (guess > 1000)
    {
        cout << "Your number is over 1000, enter a lower number: ";
        cin >> guess;
    }
    else if (guess < 1)
    {
        cout << "Your number is less than 1, enter a higher number: ";
        cin >> guess;
    }
    else if (guess > myNum)
    {
        cout << "Too high. Try again: ";
        cin >> guess;
    }
    else if (guess < myNum)
    {
        cout << "Too low. Try again: ";
        cin >> guess;
    }
    }
     if (guess == myNum)
    {
        char p;
        cout << "You guessed the number! Would you like to play again (y = yes/n = no)? : ";
        cin >> p;
            if (p == 'y')
            {
            cout << "Please type your guess: ";
            cin >> guess;
            kp (guess);
            }
            else if (p == 'n')
            cout << "Thank you for playing! " << endl;
    }
    return 0;
}
