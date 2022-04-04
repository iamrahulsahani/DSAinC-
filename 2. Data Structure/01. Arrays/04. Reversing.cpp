#include<iostream>
using namespace std;

class Array
{
    public:
    int a[5];

    void reverse()
    {
        for(int i=0;i<5/2;i++)
        {
            swap(a[i], a[5-1-i]);
        }
    }

};

int main()
{

Array arr;

cout<<"Enter values:\n";
for(int i=0;i<5;i++)
cin>>arr.a[i];

arr.reverse();

}
