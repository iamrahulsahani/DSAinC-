//input : aabbbccdab
//output : abcdab

#include<iostream>
using namespace std;

int main()
{
    string str = "aabbbccdab", s="";
    for( int i=0;str[i];i++)
    {
        if(str[i] != str[i+1])
        {
            s+=str[i];
        }
    }
    cout<<s;
}