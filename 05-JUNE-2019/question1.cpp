#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n],b[n];
     int i;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         b[i]=a[i];
     }
     
     
     sort(b,b+n);
     
     int even=floor(n/2);
     int odd=n-even;
     
     for(i=1;i<n;i+=2)
     {
        a[i]=b[odd+i-1];
     }
     
     for(i=0;i<n;i+=2)
     {
       a[i]=b[odd-i-1];
     }
     
     for(i=0;i<n;i++)
     {
        cout<<a[i];
     }
     
     return 0;
}
     
    
    
