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
 
 int k;
 cin>>k;
 
 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
    {
       if(a[i]+a[j]==k)
       {
          cout<<a[i]<<a[j]<<" ";
       }
    }
 }


 return 0;
}
