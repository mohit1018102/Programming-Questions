#include<iostream>
using namespace std;
void toh(int n,char s,char a, char d);
int main()
{
 int n;
 cin>>n;
 char s='s';
 char a='a';
 char d='d';
 toh(n,s,a,d);
 return 0;
}

void toh(int n,char s,char a, char d)
{
 if(n==0) return;
 toh(n-1,s,d,a);
 cout<<n<<"th disk from"<<s<<" to "<<d<<endl;
 toh(n-1,a,s,d);
}
 
 
