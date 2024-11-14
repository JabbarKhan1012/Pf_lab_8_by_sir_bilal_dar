#include<iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"Enter the alphabet ::";
    cin>>alpha;
    switch (alpha)
    {
    case 'a':
        cout<<"The alphabet "<<alpha<< " you entered is vowel."<<endl;
        break;
    case 'e':
        cout<<"The alphabet "<<alpha<< " you entered is vowel."<<endl;
        break;
    case 'i':
        cout<<"The alphabet "<<alpha<< " you entered is vowel."<<endl;
        break;
    case 'o':
        cout<<"The alphabet "<<alpha<< " you entered is vowel."<<endl;
        break;
    case 'u':
        cout<<"The alphabet "<<alpha<< " you entered is vowel."<<endl;
        break;
    default:
        cout<<"The alphabet  you entered is not vowel";
        break;
    }
}