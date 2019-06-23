#include<iostream>
#include<vector>
using namespace std;
int d;
vector<char> largestsub(int lcs[][100],string a,string b)
{   int n=a.length();
    int m=b.length();
    int x=lcs[n][m];
    vector<char> v;
    while(x!=0)
    { 
      if(a[n-1]==b[m-1])
       { v.insert(v.begin()+0,a[n-1]);
         n--;
         m--;
       }
      else if(lcs[n-1][m]>lcs[n][m-1])
            { n--;}
          else
            { m--;}
       x=lcs[n][m];
    }
    
   return v;
}
    

int lcs(string a, string b)
{  int n=a.length();
   int m=b.length();
   
   int lcs[n+1][100];

    for(int i=0;i<n+1;i++)
    { l
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0) lcs[i][j]=0;
            else
               if(a[i-1]==b[j-1]) lcs[i][j]=1+lcs[i-1][j-1];
                else
                 {
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                 }
        }
    }
  
   vector<char> v=largestsub(lcs,a,b);
   for(int i=0;i<v.size();i++)
   {  cout<<v[i];
   }
  cout<<endl;
 return lcs[n][m]; 
}


int main()
{
   string a;
   string b;
   
   cin>>a;
   cin>>b;

   cout<<lcs(a,b);
   return 0;
}
   
