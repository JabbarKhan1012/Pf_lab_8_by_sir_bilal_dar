#include<iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter your Grades in capital letter ::";
    cin>>grade;
    switch (grade)
    {
    case 'A':
        cout<<"You have got grade "<<grade<< " Excelent."<<endl;
        break;
    case 'B':
        cout<<"You have got grade "<<grade<< " Good."<<endl;
        break;
    case 'C':
        cout<<"You have got grade "<<grade<< " Fair."<<endl;
        break;
    case 'F':
        cout<<"You have got grade "<<grade<< " Failed"<<endl;
        break;
    default:
        cout<<"Invalid input";
        break;
    }
}