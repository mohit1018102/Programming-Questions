#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   
   int a[n];
   
   int i,j;
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
   
   int min,temp;
   
   for(i=0;i<n-1;i++)
   {
      min=i;
      
      for(j=i+1;j<n;j++)
      {
         if(a[min]>a[j])
         {
            min=j;
         }
      }
      
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
   }
   
   for(i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
  
    return 0;
}
     
   
