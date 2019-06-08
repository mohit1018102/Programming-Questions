#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    
     int i,j;
     int diff;
     for(i=0;i<n;i++)
     { cin>>a[i];
     }
     bool flag;
     for(i=0;i<n-1;i++)
     {   flag=false;
         for(j=0;j<n-i-1;j++)
         {
            if(a[j]>a[j+1])
            {  flag=true;
               diff=a[j]^a[j+1];
               a[j]=a[j]^diff;
               a[j+1]^=diff;
            }
          }
          if(!flag) break;
     }
     
     for(i=0;i<n;i++)
     { cout<<a[i]<<" ";
     }
     
     return 0;
 }         
        
