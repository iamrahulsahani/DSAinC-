#include<iostream>
using namespace std;
int main()
{
    int x=10,y=20;
    int temp;
    cout<<"x ="<<x<<endl<<"y = "<<y<<endl;
    temp = x;
    x = y;
    y = temp;
    cout<<"x ="<<x<<endl<<"y = "<<y;
}
