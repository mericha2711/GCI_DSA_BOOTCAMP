#include<iostream>
using namespace std;

int main()
{
    int n, sum=0, r;
    cout << "Enter the number : ";
    cin >> n;
    while (n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=sum;
    while(n>0)
    {
        r=n%10;
        switch(r)
        {
            case1:
            cout << "one";
            break;
            case2:
            cout << "two";
            break;
            case3:
            cout << "three";
            break;
            case4:
            cout << "four";
            break;
            case5:
            cout << "five";
            break;
            case6:
            cout << "six";
            break;
            case7:
            cout << "seven";
            break;
            case8:
            cout << "eight";
            break;
            case9:
            cout << "nine";
            break;
            case0:
            cout << "zero";
            break;
            default:
            cout << "tttt";
            break;
        }
        n=n/10;
    }
    return 0;
}


