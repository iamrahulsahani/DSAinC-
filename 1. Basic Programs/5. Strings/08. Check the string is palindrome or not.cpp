#include<iostream>
using namespace std;
int main()
{
    string str = "noon";
    int n=str.length()-1;
    int flag=0;
    for(int i=0;i<=n;i++)
    {
        if(str[i] != str[n-i])
        {
            flag = 1;
            break;
        }
    }
    if (flag==0)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";

}
