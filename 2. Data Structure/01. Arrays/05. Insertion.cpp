#include<iostream>
using namespace std;

class Array
{
    public:
    int a[5];

    void insert(int index, int data)
    {
        for(int i=0;i<5;i++)
        {
            if(i==index)
            a[i] = data;
        }
    }

};

int main()
{

Array arr;

cout<<"Enter values:\n";
for(int i=0;i<5;i++)
cin>>arr.a[i];

int index=3;
int data=100;
arr.insert(index,data);

}
