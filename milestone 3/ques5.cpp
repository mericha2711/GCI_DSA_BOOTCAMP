#include<iostream>
using namespace std;

int main() 
{
    int number, reminder, DigitProduct=1;
    cout << "Please enter the number to find the product of digits : " ;
    cin >> number;

    while (number > 0)
    {
        reminder = number%10;
        DigitProduct = DigitProduct*reminder;
        number = number/10;
        cout << " Digit = " << reminder << "and the digit product = " << DigitProduct;
    }
    cout << " The product of all digits in a given number = " << DigitProduct;

    return 0;
}