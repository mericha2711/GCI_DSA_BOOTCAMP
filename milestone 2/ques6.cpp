#include<iostream>
using namespace std;

int main()
{
    int age1, age2, age3;
    cout << "Enter the age of 1st person : " << endl;
    cin >> age1;
    cout << "Enter the age of 2nd person : " << endl;
    cin >> age2;
    cout << "Enter the age of 3rd person : " << endl;
    cin >> age3;
    if(age1>age2 && age1>age3) {
        cout << "1st person is oldest among all." << endl;
    }
    else if(age3>age1 && age3>age2) {
        cout << "3rd person is oldest among all." << endl;
    }
    else {
        cout << "2nd person is oldest among all." << endl;
    }

    if(age1<age2 && age1<age3) {
        cout << "1st person is youngest among all." << endl;
    }
    else if(age3<age1 && age3<age2) {
        cout << "3rd person is youngest among all." << endl;
    }
    else {
        cout << "2nd person is youngest among all." << endl;
    }

    return 0;
}