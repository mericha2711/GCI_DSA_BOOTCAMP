#include<iostream>
using namespace std;

int main()
{
    int i, start, end;

    cout << "Please enter the starting ASCII Value : ";
    cin >> start;

    cout << "Please enter the ending ASCII Value : ";
    cin >> end;

    cout << "The ASCII values of character between" << start << "and" << end << "are" << endl;

    for(i=start; i<=end; i++)
    {
        cout << "The ASCII value of" << (char)i << "=" <<i<< endl;
    }

    return 0;
}