// find two numbers such that it's sum is equal to original number & 
// both numbers should be prime
// given no = 34
// 3 31
// 5 29
// 11 23
// 17 17
#include<iostream>
using namespace std;
int isPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
        if(n%i==0)
        break;
    if(i>n/2)
    return 1;
    else
    return 0;
}
int main()
{
    int n=34;
    for(int i=2;i<=n/2;i++)
    {
        if(isPrime(i) && isPrime(n-i))
        cout<<i<<" "<<n-i<<endl;
    }

}
