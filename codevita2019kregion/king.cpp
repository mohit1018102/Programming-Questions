#include<bits/stdc++.h>
using namespace std;
int n;
bool isValid(int i,int j)
{
	if( (i>=0&&i<n) && (j>=0&&j<n) ) return true;
	return false;
}
void knight(int **board,int i,int j)
{
	board[i][j]=2;
	int x[]={-1,-1,1,1,-2,-2,2,2};
	int y[]={2,-2,2,-2,1,-1,1,-1};
	
	for(int k=0;k<8;k++)
	{
		if(isValid(i+x[k],j+y[k]))
		{
			board[i+x[k]][j+y[k]]=1;
		}
	}
}

void rooks(int **board,int i,int j)
{
	for(int k=i+1;k<n;k++)//V
	{
		if(board[k][j]==2) break;
		board[k][j]=1;
	}
	
	for(int k=i-1;k>=0;k--) //^
	{
		if(board[k][j]==2) break;
		board[k][j]=1;
	}
	
	
	for(int k=j+1;k<n;k++)//>
	{
		if(board[i][k]==2) break;
		board[i][k]=1;
	}
	
	for(int k=j-1;k>=0;k--) //<
	{
		if(board[i][k]==2) break;
		board[i][k]=1;
	}
}

void bishops(int **board,int i,int j)
{
	int posx,posy;
	posx=i-1;
	posy=j+1;
	while(isValid(posx,posy))
	{   if(board[posx][posy]==2) break;
		board[posx][posy]=1;
		posx--;
		posy++;
	}
	
	posx=i+1;
	posy=j-1;
	while(isValid(posx,posy))
	{  if(board[posx][posy]==2) break;
		board[posx][posy]=1;
		posx++;
		posy--;
	}
	
	posx=i-1;
	posy=j-1;
	while(isValid(posx,posy))
	{   
	    if(board[posx][posy]==2) break;
		board[posx][posy]=1;
		posx--;
		posy--;
	}
	cout<<posx<<" "<<posy<<endl;
	
	posx=i+1;
	posy=j+1;
	while(isValid(posx,posy))
	{   if(board[posx][posy]==2) break;
		board[posx][posy]=1;
		posx++;
		posy++;
	}
	
}

int main()
{
	
	cin>>n;
	int k,r,b,q,count=0;
	int **board=(int**) malloc(sizeof(int*)*n);
	for(int i=0;i<n;i++)
	{
		board[i]=(int*)malloc(sizeof(int)*n);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) board[i][j]=0;
	}
	
	cin>>k;
	while(k--)
	{
	   int i,j;
	   cin>>i>>j;	
	   
	   knight(board,i,j);
	}
	
	cin>>r;
	pair<int,int> rook[r];
	for(int i=0;i<r;i++){
		int ix,j;
		cin>>ix>>j;
		board[ix][j]=2;
		rook[i].first=ix;
		rook[i].second=j;
	}
	
	cin>>b;
	pair<int,int> bishop[b];
	for(int i=0;i<b;i++){
		int ix,j;
		cin>>ix>>j;
		board[ix][j]=2;
		bishop[i].first=ix;
		bishop[i].second=j;
	}
	
	cin>>q;
	pair<int,int> queen[q];
	for(int i=0;i<q;i++){
		int ix,j;
		cin>>ix>>j;
		board[ix][j]=2;
		queen[i].first=ix;
		queen[i].second=j;
	}
	
	//------------------------------------
		for(int i=0;i<r;i++){
		 int ix,j;
		ix=rook[i].first;
		j=rook[i].second;
		rooks(board,ix,j);
	   }
	   
	   for(int i=0;i<b;i++){
		int ix,j;
		ix=bishop[i].first;
		j=bishop[i].second;
		bishops(board,ix,j);
	   }
	   
	   for(int i=0;i<q;i++){
		int ix,j;
		ix=queen[i].first;
		j=queen[i].second;
		cout<<"queen"<<endl;
		bishops(board,i,j);
		rooks(board,ix,j);
	   }
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{   cout<<board[i][j]<<" ";
			if(board[i][j]==0) count++;
		}
		cout<<endl;
	}
	
	cout<<count<<endl;
	
	
}
