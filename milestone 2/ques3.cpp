#include<iostream>
using namespace std;

int main()
{
    int qty;
    float totcost;
    cout << "\nEnter Quantity : ";
    cin >> qty;
    if(qty*100>1000) {
        totcost = (qty*100) - (10*(qty*100)/100);
    }
    else{
        totcost=qty*100;
    }
    cout << "The Total Cost : " << totcost << endl;
    return 0;
    }