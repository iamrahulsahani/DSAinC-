#include<iostream>
using namespace std;

class Array
{
    public:
    int a[5];

    void deleteByElement(int data)
    {
        int flag = 0;
        for(int i=0;i<5;i++)
        {
            if(a[i]==data)
            {
                flag = 1;
            }
            if(flag == 1)
            {
                a[i] = a[i+1];
            }
        }
    }

    void deleteByIndex(int index)
    {
        for(int i=index;i<5;i++)
        {
            a[i]=a[i+1];
        }
    }

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

int data=5;
arr.deleteByElement(data);

int index=0;
arr.deleteByIndex(index);

cout<<"Array Elements:\n";
arr.display();

}
