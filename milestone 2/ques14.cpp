#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a 4-digit number" << endl;
    cin >> number;
    int first_digit, second_digit, third_digit, fourth_digit;
    fourth_digit = number%10;
    number = number/10;
    third_digit = number%10;
    number = number/10;
    second_digit = number%10;
    number = number/10;
    first_digit = number%10;
    cout << "The reversed number is " << (fourth_digit*1000)+(third_digit*100)+(second_digit*10)+(first_digit*1) << endl;
    return 0;
}