#include<iostream>
using namespace std;
int main()
{
    string str="raHUL";
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i] = str[i] - 'a' + 'A';

    }
    cout<<str;
}
