#include<iostream>
using namespace std;
int count(int money,int c,int coin[])
{
	if(money==0) return 1;
	if(c<=0) return 0;
	if(coin[c-1]>money) return count(money,c-1,coin);
	
	return count(money,c-1,coin)+count(money-coin[c-1],c,coin);
}
int countdp(int money,int c,int coin[])
{
	int count[c+1][money+1]={};
	
	for(int i=0;i<c+1;i++)
	{
		for(int j=0;j<money+1;j++)
		{
			if(j==0) count[i][j]=1;
			else
			 if(i==0) count[i][j]=0;
			 else
			  if(coin[i-1]>j) count[i][j]=count[i-1][j];
			  else
			  count[i][j]=count[i-1][j]+count[i][j-coin[i-1]];
		}
	}
	
	return count[c][money];
}
int main()
{   int t;
    cin>>t;
	int money,c;
	while(t--){
	
    	cin>>money;
    	cin>>c;
    	int coin[c];
    	for(int i=0;i<c;i++) cin>>coin[i];
    	cout<<count(money,c,coin)<<endl;
    	cout<<countdp(money,c,coin)<<endl;
    }
    	
    
    return 0;
} 
