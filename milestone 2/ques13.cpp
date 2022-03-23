#include<iostream>
using namespace std;

int main()
{
    int age;
    char gender, ms;    //ms-martial status
    char m, f, y, n;    //m-male, f-female, y-yes, n-no
    cout << "Enter age of employee : " ;
    cin >> age;
    cout << "Enter gender of employee : " ;
    cin >> gender;
    cout << "Martial status of employee : " ;
    cin >> ms;
    if(gender=='f') {
        cout << " Employee will only work in urban areas. " << endl;
    }
    if(gender=='m')
    if(age>=20 & age<=40) {
        cout << "Employee will work anywhere. " << endl;
    }
    else if(age>40 & age<=60) {
        cout << "Employee will only work in urban areas. " << endl;
    }
    else {
        cout << "ERROR" << endl;
    }

    return 0;
    }
