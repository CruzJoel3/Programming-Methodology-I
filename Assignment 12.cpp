/*
Create a system that multiple people can use, that presents them with 5 topics, that they will rate out of 10 in regards to how badly they feel these topics should be addressed by politicians.

The program should also provide the average rating for each of the topics once all users are finished placing thier ratings.


*/

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

int voters;
int rate;
float average[5] = {0};
string causes[5] = {"Abortion","Police B","Environ.","Corrupt.","Immigra."};
int table[5][10] = {0};
cout << "How many people will be voting? ";
cin >> voters;
for (int j = 0; j <= voters-1;j++)
{
    cout << "Person # " << j+1 << endl;
    cout << "_____________________\n";
    for (int i = 0; i <= 4;i++)
    {
        cout << "\nRate for " <<causes[i] << ": ";
        cin >> rate;
        if (rate == 1)
        {
            table[i][0]++;
            average[i] = average[i] + 1;
        }
        else if (rate == 2)
        {
            table[i][1]++;
            average[i] = average[i] + 2;
        }
        else if (rate == 3)
        {
            table[i][2]++;
            average[i] = average[i] + 3;
        }
        else if (rate == 4)
        {
            table[i][3]++;
            average[i] = average[i] + 4;
        }
        else if (rate == 5)
        {
            table[i][4]++;
            average[i] = average[i] + 5;
        }
        else if (rate == 6)
        {
            table[i][5]++;
            average[i] = average[i] + 6;
        }
        else if (rate == 7)
        {
            table[i][6]++;
            average[i] = average[i] + 7;
        }
        else if (rate == 8)
        {
            table[i][7]++;
            average[i] = average[i] + 8;
        }
        else if (rate == 9)
        {
            table[i][8]++;
            average[i] = average[i] + 9;
        }
        else if (rate == 10)
        {
            table[i][9]++;
            average[i] = average[i] + 10;
        }
    }
    cout << "_____________________\n\n\n";
}

cout << "Results:\n\nIssue/Rate: ";

int s = 1;
for (int t = 0; t <=9;t++)
{
    cout << s << "   ";
    s++;
}

cout << "\n______________________________________________________";
for (int r = 0;r <=4;r++)
{
    cout << "\n\n" <<causes[r] << "    ";
    for (int q = 0; q <= 9;q++)
    {
        cout << table[r][q] << "   ";
    }
    cout << " Average = " << fixed << setprecision(2) << average[r]/voters;
}

cout << "\n______________________________________________________\n";
}