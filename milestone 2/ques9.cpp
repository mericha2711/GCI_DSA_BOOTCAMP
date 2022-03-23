#include<iostream>
using namespace std;

int main()
{
    float Totalclasses, ClassesAttended, Percentage;
    char MedicalCause;

    cout << "Enter total classes held : ";
    cin >> Totalclasses;
    cout << "Enter total classes attended : ";
    cin >> ClassesAttended;
    cout << "Enter 'Y' if he/she has a medical cause and 'N' if not :";
    cin >> MedicalCause;

    if(MedicalCause == 'N' || MedicalCause == 'n')
    {
        if ((Percentage < 75) && (Percentage >= 0))
        {
            cout << "Student is not allowed to sit in exam because his/her percentage is below 75." ;
        }
        else
        {
            cout << "Student is allowed to sit in exam because his/her percentage is above 75." ;
        }
    }
    else if(MedicalCause == 'Y' || MedicalCause == 'y')
    {
        cout << "Student is allowed to sit in exam because he/she has a medical cause." ;
    }
else
{
    cout << "Attended classes cannot be more than total classes held!" ;
}

return 0;
    }
    