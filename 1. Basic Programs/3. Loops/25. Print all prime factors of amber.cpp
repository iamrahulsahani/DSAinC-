//prime factors : 147 = 3*7*7
// here 3 & 7 is a prime number & it's product of factor is equal to original number
#include<iostream>
using namespace std;


int main()
{
    int n=147,i;
    for(i=2;n>1;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n = n/i;
        }
    
    }
}