#include<iostream>
#include<string>
using namespace std;
string reverse1(string str)
{   char temp;
    int n=str.length();
    for(int i=0;i<n/2;i++)
    { temp=str[i];
      str[i]=str[n-i-1];
      str[n-i-1]=temp;
    }
   return str;
}
       
int main()
{
   string str;
   string ans;
   getline(cin,str);
   str=str+" ";
   int n=str.length();
   int st=0,len=0;
   for(int i=0;i<n;i++)
   {   
        if(str[i]==' ')
        {
              ans+=reverse1(str.substr(st,len))+" ";
              st=i+1;
              len=0;
        }
        else
            len++;
   }
 
   cout<<ans;
   return 0;
}
     
