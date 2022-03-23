#include<iostream>
using namespace std;

int main()
{
    int n, i, j, ctr, r;
    cout << "Find frequency of each digit in a given integer :";
    cout << "";
    cout << "Input any number : ";
    cin >> n;
    for (i=0; i<10; i++)
    {
        r = j%10;
        if (r==i)
        {
            ctr++;
        }
    }
    cout << ctr << endl;

return 0;
}