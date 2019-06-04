#include<iostream>
#include<cmath>
using namespace std;
int main()
{

 int na;
 cin>>na;
 int a[na];
 
 int i,j;
 
 for(i=0;i<na;i++)
 {
     cin>>a[i];
 }
 
 int nb;
 cin>>nb;
 
 int b[nb];
 for(i=0;i<nb;i++)
 {
     cin>>b[i];
 }
 
 
 
 
 for(i=0;i<na;i++)
 {
    for(j=0;j<nb;j++)
    {
       if(pow(a[i],2)>pow(b[j],2))
       {
          cout<<a[i]<<b[j]<<" ";
       }
    }
 }


 return 0;
}
