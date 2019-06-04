#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	unsigned long long xvalue=x;
	unsigned long long fact=1;
	int sign=1;
	int i;
	cin>>i;
	unsigned long long sum=0;

	while(i--){
	sum+=sign*((double)xvalue/fact);
	xvalue=xvalue*x*x;
	fact=fact*(fact+1)*(fact+2);
	sign=-1*sign;
    
   }
   
   cout<<sum;
   return 0;
}
