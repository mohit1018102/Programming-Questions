#include<iostream>
using namespace std;
int ncr(int n,int r)
{
     int c[n+1][r+1];
     int i,j;
     for(i=0;i<n+1;i++)
     {
          for(j=0;j<r+1;j++)
         { 
             if(i<j) c[i][j]=0;
             else
                if(i==j||j==0) c[i][j]=1;
              else
                 if(i-1==j) c[i][j]=i;
               else
                {
                      c[i][j]=c[i-1][j]+c[i-1][j-1];
                }
         }
     }

   return c[n][r];
}
              

int main()
{
   int n,r;
   cin>>n;
   cin>>r;

   cout<<ncr(n,r);
  
   return 0;
}
