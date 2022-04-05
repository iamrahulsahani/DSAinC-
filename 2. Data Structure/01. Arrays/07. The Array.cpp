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

    void reverse()
    {
        for(int i=0;i<5/2;i++)
        {
            swap(a[i], a[5-1-i]);
        }
    }

    void insert(int index, int data)
    {
        for(int i=0;i<5;i++)
        {
            if(i==index)
            a[i] = data;
        }
    }

    int search(int item)
    {
        for(int i=0;i<5;i++)
        {
            if(a[i]==item)
            {
                return i;
            }
        }
        return -1;
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
