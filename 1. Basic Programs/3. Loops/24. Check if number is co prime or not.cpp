//Co prime number is a pair of number which don't have common factors other than 1
//e.g (8,15)
//8 = 1,2,4,8
//15=  1,3,5,15
//Explanation :  factors of 8 & 5 don;t have a common factor other than 1


#include<iostream>
using namespace std;
int main()
{
    int a=8,b=15,flag=0,smaller;
    smaller = (a<b)?a:b;
    for(int i = 2; i<= smaller;i++)
    {
        if(a%i==0 && b%i==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==0)
    cout<<"Co prime";
    else
    cout<<"Not Co prime";
  
}
