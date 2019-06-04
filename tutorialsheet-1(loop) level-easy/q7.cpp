#include<bits/stdc++.h>
using namespace std;

int main()
{
   int fq[10]={};
   int n;
   cin>>n;
   
   while(n>0)
   {
   	 fq[n%10]++;
   	 n=n/10;
   }
   
   for(int i=0;i<10;i++)
   {
   	cout<<"Frequency of "<<i<<" = "<<fq[i]<<endl;
   }
   	return 0;
}
