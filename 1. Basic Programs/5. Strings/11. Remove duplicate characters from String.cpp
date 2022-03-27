//input : aabbbccdab
//output : abcd

#include<iostream>
using namespace std;

int inString(string str, char s)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(s == str[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string str = "aabbbccdab", s="";
    for(int i=0;str[i];i++)
    {
        if(! inString(s, str[i]) )
        {
            s += str[i];
        }
    }
    cout<<s;
}