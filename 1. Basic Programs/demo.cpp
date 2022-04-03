#include<iostream>
using namespace std;

class Array
{
    public:
    int a[5];

    // void display()
    // {
    //     for(int i=0;i<5;i++)
    //     cout<<a[i]<<endl;
    // }

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
int n;

cout<<"Enter values:\n";
for(int i=0;i<5;i++)
cin>>arr.a[i];

cout<<"Enter element to be searched:\n";
cin>>n;

int result ;
result = arr.search(n);
if(result !=-1)
cout<<"Element fount at index: "<<result;
else
cout<<"Element not found!";



// cout<<"Array Elements:\n";
// arr.display();

}
