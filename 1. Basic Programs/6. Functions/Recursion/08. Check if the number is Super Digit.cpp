// A Super Digit number is the sum of all digits until it becomes single digit.
//eg. 513682 = 5+1+3+6+8+2 = 25 => 2+5 = 7
// 7 is the super digit of 513682


#include<iostream>
using namespace std;

int superDigit(int n)
{
    int sum=0,last;
    while(n)
    {
        last = n%10;
        sum+=last;
        n = n/10;
    }
    if(sum/10==0)
    return sum;
    else
    return superDigit(sum);
}

int main()
{
   int n=513682;
   cout<<superDigit(n);

}