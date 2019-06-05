#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
  if(a>b) return true;
  else return false;
}

int main()
{
  vector<int> v;
  
  int n;
  cin>>n;
  
  int i,key;
  
  for(i=0;i<n;i++)
  {
    cin>>key;
    v.push_back(key);
  }
  
  cout<<"-------------before sorting-------------\n";
  
  for(i=0;i<n;i++)
  {
     cout<<v[i]<<" ";
  }
  cout<<endl;
  
  
  sort(v.begin(),v.begin()+3);
  
   
  cout<<"-------------starting 3 elements sorting-------------\n";
  
  for(i=0;i<n;i++)
  {
     cout<<v[i]<<" ";
  }
  cout<<endl;
  
  
  
  
  
  sort(v.begin(),v.end());
  
  cout<<"-------------after sorting-------------\n";
  
  for(i=0;i<n;i++)
  {
     cout<<v[i]<<" ";
  }
  cout<<endl;
  
  cout<<"-------------non-increasing order sorting-------------\n";
  
  sort(v.begin(),v.end(),comp);
  
  for(i=0;i<n;i++)
  {
     cout<<v[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}
  
  
   
  
