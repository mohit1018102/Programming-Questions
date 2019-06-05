#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  unsigned int n;
  cin>>n;
 
  int x=n,count=0;
  
  while(x>0)
  {
   x=x/10;
   count++;
  }
  
 
  
  x=n;
  unsigned int arm=0;
  while(x>0)
  {
     arm=arm+pow(x%10,count);
   
     x=x/10;
  }
  

 
  int flag=0; 
  if(arm==n){flag=1; cout<<"armstrong number";}
  
  if(flag==1 && sqrt(n)==floor(sqrt(n))) cout<<"perfect square";
  
  return 0;
}

  
     
  
  
  
  
