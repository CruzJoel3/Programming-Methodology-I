/*
Create a program who rolls two dice 36,000 and adds up each sum of the two dice. Then it'll display the number of times each sum occurred
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main (){

int first;
int second;
int sum;;
int counter = 2;
int tally[11] = {0};
srand(time(0));
for (int i = 0; i <= 29999;i++)
{
    first = rand()%7;
    second = rand()%7;
    if (first == 0)
        {
            first++;

        }
    if (second == 0)
        {
            second++;
        }
    sum = first + second;
    if (sum == 2)
        {
            tally[0]++;
        }
    else if (sum == 3)
        {
            tally[1]++;
        }
    else if (sum == 4)
        {
            tally[2]++;
        }
    else if (sum == 5)
        {
            tally[3]++;
        }
    else if (sum == 6)
        {
            tally[4]++;
        }
    else if (sum == 7)
        {
            tally[5]++;
        }
    else if (sum == 8)
        {
            tally[6]++;
        }
    else if (sum == 9)
        {
            tally[7]++;
        }
    else if (sum == 10)
        {
            tally[8]++;
        }
    else if (sum == 11)
        {
            tally[9]++;
        }
    else if (sum == 12)
        {
            tally[10]++;
        }
}
cout << "Sum    Total\n";

for (int k = 0; k <=10; k++)
{
    cout << counter << "        " << tally[k] << endl;
    counter++;
}
}