#include<iostream>
using namespace std;
int main()
{
    int color;
    cout<<"Enter theffirst alphabet of color of traffic light in capital letters in ::";
    cin>>color;
    switch (color)
    {
    case 'R':
        cout<<"The Traffic signal is Red So Stop";
        break;
    case 'G':
        cout<<"The Traffic signal is Green So GO";
        break;
    case 'Y':
        cout<<"The Traffic signal is Yellow So slow down";
        break;
    default:
        cout<<"Invalid color";
        break;
    }
}