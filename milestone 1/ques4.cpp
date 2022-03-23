#include<iostream>
using namespace std;

int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d" , &num);
    if(num > 0) {
        printf("%d is Positive Number" , num);
    } else if (num < 0) {
        printf("%d is Negative Number" , num);
    } else {
        printf("Input Number is Zero");
    }
    return 0;
}