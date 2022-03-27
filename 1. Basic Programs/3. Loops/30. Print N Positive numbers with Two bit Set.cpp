//two bit set means binary of a number should contain two 1's.(two bits ON)
//3 = 0011
//5 = 0101

#include<iostream>
using namespace std;

// ----------------------------Optimal SolutionO(n)------------------------------
int main()
{
    int num = 10,n=1,k=1,last,count=0,n_time=0,copy_of_n=1;
    while(1)
    {
        if(n_time==num)
        {
            break;
        }

        if(n==0)
        {
            if(count == 2)
            {
                cout<<copy_of_n<<" ";
                n_time++;
            }
            n = k++;
            copy_of_n = n;
            count = 0;

        }
        last = n%2;
        n = n/2;
        if(last == 1)
        {
            count += 1;
        }
    }
}
//---------------------Improved------------------------
/*
int main()
{
    int n=5,i,j;
    for(i=2;n;i=i*2)
    {
        for(j=1;j<i;j=j*2)
        {
            cout<<i+j<<" ";
            n--;
            if(n==0)
            break;
        }
    }
}
*/

//---------------------Bruteforce------------------------
/*
int main()
{
    int n=5,x=3,y,count;
    while(n)
    {
        y=x;
        count = 0;
        while(y)
        {
            if(y%2==1)
            {
                count++;
            }
            y = y/2;
        }
        if(count==2)
        {
            cout<<x<<" ";
            n--;
        }
        x++;
    }
}
*/