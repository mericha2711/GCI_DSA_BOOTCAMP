#include<iostream>
using namespace std;

int main()
{
    double classesheld, classesattended;
    double percentage;
    cout << "\n\n" ;

    cout << "Enter number of classes held : " ;
    cin >> classesheld;
    cout << "Enter number of classes attended : " ;
    cin >> classesattended;
    percentage = (classesattended/classesheld)*100 ;
    if(percentage<75)
    {
        cout << "Your percentage is : " << percentage << " You are not allowed to sit in examination.";
    }
    else 
    {
        cout << "Your percentage is : " << percentage << " You are allowed to sit in examination.";
    }
    cout << "\n\n";
    return 0;
}