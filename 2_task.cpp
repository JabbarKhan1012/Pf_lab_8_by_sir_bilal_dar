#include<iostream>
using namespace std;
int main()
{
    double num_1,num_2;
    char symbol;
    cout<<"Enter the first number::";
    cin>>num_1;
    cout<<"Enter the second number::";
    cin>>num_2;
    cout<<"Enter the symbol of operation you want to perform";
    cin>>symbol;
    switch (symbol)
    {
    case '+':
        cout<<"The sum of "<<num_1<<" and "<<num_2<<" = "<<num_1+num_2; 
        break;
    case '-':
        cout<<"The difference of "<<num_1<<" and "<<num_2<<" = "<<num_1-num_2; 
        break;
    case '*':
        cout<<"The product of "<<num_1<<" and "<<num_2<<" = "<<num_1*num_2; 
        break;
    case '/':
        cout<<"The division of "<<num_1<<" and "<<num_2<<" = "<<num_1/num_2; 
        break;
    
    default:
        cout<<"Invalid Operator";
        break;
    }
    return 0;
}