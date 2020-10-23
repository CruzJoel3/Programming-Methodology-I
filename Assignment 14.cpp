/*
You have the following list of numbers:
30
-40
-20
-10
40
0
10
5
-5
20
Find the groups of 3 numbers whose sum is 0 
(zero). Your final output show the groups
which sum up to zero.
*/

#include <iostream>

using namespace std;

int main (){

signed int group[10] = {30,-40,-20,-10,40,0,10,5,-5,20};
int sum;
int first;
int second;
int third;
int p = 1;
for (int i = 0; i <= 9; i++)
{
    for (int j = 1; j<= 9; j++)
    {
        sum = group[i] + group[j];
        for (int k = 0; k <= 9;k++)
        {
            if ((sum + group[k]) == 0)
            {
                first = group[i];
                second = group[j];
                third = group[k];
                cout << " Group #" << p << " = " << first << " ," << second << " ," << third << endl;
                p++;
            }
        }
    }
}
}