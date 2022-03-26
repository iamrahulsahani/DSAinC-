#include<iostream>
using namespace std;
int main()
{
    string str = "  i am RAHUL Sahani ";
    int count = 0;
    int n = str.length()-1;
    //checking if the current index is a character & next index is a space
    for(int i=0;str[i];i++)
    {
        if( ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) && str[i+1]==' ')
        count += 1;
    }
    //checking if last element is a char or not
    if ((str[n]>='a' && str[n]<='z') || (str[n]>='A' && str[n]<='Z'))
    count += 1;
    cout<<count;
}
