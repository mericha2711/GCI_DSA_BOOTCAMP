#include<iostream>
using namespace std;

int main() 
{
    int length, breadth;
    cout << "Enter the length of rectangle : ";
    cin >> length;
    cout << "Enter the breadth of rectangle : " ;
    cin >> breadth;
    
    cout << endl;
    if(length==breadth){
        cout << "Yes it is a square." ;
    }
    else{
        cout << "No  it is not a square." ;
    }
    return 0;
    }
    