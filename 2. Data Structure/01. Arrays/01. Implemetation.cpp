#include<iostream>
using namespace std;

class Array
{
    public:
    int a[5];
};

int main()
{

Array arr;

cout<<"Enter values:\n";
for(int i=0;i<5;i++)
cin>>arr.a[i];

}
