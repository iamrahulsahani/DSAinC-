#include<iostream>
using namespace std;

int main()
{
   int a[] = {3,-7,4,2};
   int current_max=0;
   int global_max=0;
   for(int i=0;i<=3;i++)
   {
      current_max += a[i];
      if(current_max<a[i])
      {
         current_max = a[i];
      }

      if(global_max<current_max)
      {
         global_max = current_max;
      }
   }

cout<<current_max<<endl;
cout<<global_max;

   
}
