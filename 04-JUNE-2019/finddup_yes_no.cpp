#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int i;
   
   for(i=0;i<n;i++)
   {
     cin>>a[i];
   }
   
   for(i=0;i<n;i++)
   {
      if(a[abs(a[i])]<0)
      {
         cout<<"duplicate found"; break;
      }
      else
      {
         a[abs(a[i])]*=-1;
      }
    }
}
        
         
   
   
