/*
A company pays its salespeople on a commission basis. The salespeople each
receive $200 per week plus 9 percent of their gross sales for that week. 
- For example, a salesperson who grosses $5000 in sales in a week receives $200 plus 9 percent of$5000,or a total of $650. 

- Write a program (using an array of counters) that determines how many of the salespeople earned salaries in each of the following ranges (assume that each salesperson�s salary is truncated to an integer amount):

a)$200�299 b)$300�399 c)$400�499 d) $500�599 e) $600�699 f) $700�799 g) $800�899 h) $900�999 i) $1000 and over. 

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (){

int workers;
int counter = 1;
int sales;
float salary;
int arr[9] = {0};
string ranges[9] = {"$200-299","$300-399","$400-499","$500-599","$600-699","$700-799","$800-899","$900-999","$1000 and over"};
cout << "How many workers worked this week? ";
cin >>workers;
for (int i = 0; i <= workers-1; i++)
    {
        cout << "How much did worker #" << counter << " sell?: ";
        cin >> sales;
        salary = 200 + (sales*0.09);
        cout << fixed << setprecision(2)<< "Worker Pay = " << salary << endl;
        if ((salary > 199) && (salary < 300))
        {
            arr[0]++;
        }
        else if ((salary >299) && (salary < 400))
        {
            arr[1]++;
        }
        else if ((salary >399) && (salary < 500))
        {
            arr[2]++;
        }
        else if ((salary >499) && (salary < 600))
        {
            arr[3]++;
        }
        else if ((salary >599) && (salary < 700))
        {
            arr[4]++;
        }
        else if ((salary >699) && (salary < 800))
        {
            arr[5]++;
        }
        else if ((salary >799) && (salary < 900))
        {
            arr[6]++;
        }
        else if ((salary >899) && (salary < 1000))
        {
            arr[7]++;
        }
        else if (salary >=1000)
        {
            arr[8]++;
        }
        counter++;
    }
cout << "\nThe number of workers who made:\n";
for (int j = 0; j <= 8;j++)
{
    cout << ranges[j] << ": = " << arr[j] << endl;
}
}