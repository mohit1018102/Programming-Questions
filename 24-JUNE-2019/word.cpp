#include<iostream>
using namespace std;
int main()
{
  string str;
  getline(cin,str);

  int i=0,c=0;
  int l=str.length();
  for(i=0;i<l;i++)
  {
    if(str[i]==' ') c++;
  }
  cout<<c+1;
  return 0;
}
