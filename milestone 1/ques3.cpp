#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an Integer\n" ;
    cin >> num;
    if (num % 2 == 0) {
        cout << num << "is EVEN Number" ;
    } else {
        cout << num << "is ODD Number" ;
    }
    
    return 0;

}