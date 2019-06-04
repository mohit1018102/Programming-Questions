#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int s=0;
  int x=n;
  
  while(x>0)
  { x>>=1;
    s++;
  }

  
  
  int b[s]={};
  
  int i=0;
  while(n>0)
  {
    b[i]=n&1;
    n=n>>1;
    i++;
  }
  
  for(i=s-1;i>=0;i--)
  {
    cout<<b[i];
  }
  
  return 0;
  
}
