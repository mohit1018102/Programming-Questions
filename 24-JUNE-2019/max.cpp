#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   int r,c; cin>>r>>c;
   
    int arr[r][c];
     for(int i=0;i<r;i++) 
     {
         for(int j=0;j<c;j++)
         {
              cin>>arr[i][j];
         }
     }
 
    int max=0,ind=-1,count=0;
    for(int i=0;i<r;i++)
    { count=0;
          for(int j=0;j<c;j++)
          {
              if(arr[i][j]==1)
               count+=arr[i][j];
          }
           if(count>max)
          {
                max=count; ind=i;
          }
     }
     cout<<ind<<endl;
     return 0;
}
  
