#include<iostream>
using namespace std;

int main() 
{
    double salary;
    int YearOfService;
    do
    {
        cout << "\nPlease enter a salary :" ;
        cin >> salary;
        if (salary ==  0)break;
        cout << "Please, enter year of service :";
        cin >> YearOfService;
        if(YearOfService > 5)
        {
            cout << "\nNet Bonus amount is : " << 0.05*salary;
            cout << "\nResult salary is : " << salary + 0.05*salary;
        }
        else {
            cout << "\nNet Bonus amount is : " <<0;
            cout << "\nResult salary is : " << salary;
        }
    } while (true);
}