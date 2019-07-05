#include<bits/stdc++.h>
using namespace std;

int findmin(vector<vector<int> >mountain,int i,int j,int r,int c)
{
	if(i<0||i>=r||j>=c|| j<0) return 99999999;
    
	if((i==0 && j==0))
	{
	     if(mountain[i][j]<mountain[i+1][j] && mountain[i][j]<mountain[i][j+1])
		 return mountain[i][j];	
	}	
	else
	   if(i==0&& j==c-1)
	   {
	   	if(mountain[i][j]<mountain[i+1][j] && mountain[i][j]<mountain[i][j-1])
		return mountain[i][j];	
	   }
	   else
	    if(i==0)
	    {
	    	if(mountain[i][j]<mountain[i+1][j] && mountain[i][j]<mountain[i][j-1] && mountain[i][j]<mountain[i][j+1])
		     return mountain[i][j];
		}
		 else
		  if(j==c-1)
		  {
		  	if(mountain[i][j]<mountain[i-1][j] && mountain[i][j]<mountain[i][j-1] && mountain[i][j]<mountain[i][j+1])
		    return mountain[i][j];
		  }
		  else
		   {
		    if(mountain[i][j]<mountain[i+1][j] && mountain[i][j]<mountain[i][j-1] && mountain[i][j]<mountain[i][j+1]&& mountain[i][j]<mountain[i+1][j])
		     return mountain[i][j];
         }
	int left= findmin(mountain,i,j-1,r,c);
	int right=findmin(mountain,i,j+1,r,c);
	int down=findmin(mountain,i+1,j,r,c);
	int up=findmin(mountain,i-1,j,r,c);

	int x=(min(left,right),min(up,down));
	if(x==left)  return findmin(mountain,i,j-1,r,c);
	if(x==right) return findmin(mountain,i,j+1,r,c);
	if(x==down) return findmin(mountain,i+1,j,r,c);
	if(x==up) return findmin(mountain,i-1,j,r,c);
}

vector<vector<int> > solve(vector<vector<int> > mountain)
{
    int r=mountain.size();
	int c=mountain[0].size();
	vector<vector<int> > ans;
	for(int i=0;i<r;i++)
	{ vector<int> a;
	    for(int j=0;j<c;j++)
		{  a.push_back(0); 
		}	
		ans.push_back(a);
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;i++)
		{
			ans[i][j]= findmin(mountain,i,j,r,c);
			break;
		}
	}
	return ans;	
}
int main()
{
   vector<vector<int> > mountain;
   int r;
   int c;
   cin>>r>>c;
   for(int i=0;i<r;i++)
   { vector<int> a;
   	 for(int j=0;j<c;j++)
   	 { int key;
   	   cin>>key;
   	   a.push_back(key); 	
	 }
	 mountain.push_back(a);
   }
   
   vector<vector<int> > ans= solve(mountain);
   for(int i=0;i<r;i++)
   {
   	 for(int j=0;j<c;j++)
   	 {
   	    cout<<ans[i][j]<<" "; 	
	 }
	 cout<<endl;
   }
   return 0;
}

