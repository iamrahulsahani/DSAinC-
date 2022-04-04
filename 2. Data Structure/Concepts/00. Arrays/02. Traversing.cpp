#include<iostream>
using namespace std;

class Array
{
    public:
    int a[5];

    void display()
    {
        for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    }
};

int main()
{

Array arr;

cout<<"Enter values:\n";
for(int i=0;i<5;i++)
cin>>arr.a[i];

cout<<"Array Elements:\n";
arr.display();

}
