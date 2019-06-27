#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Heap
{
	private: 
	       vector<int> heap;
	       int size;
    public:
    	Heap()
    	{
    		size=0;
		}
    	void build_heap()
    	{
    		int i;
    		int x=floor(size/2-1);
    		for(int i=x;i>=0;i--)
    		{
    			heapify(i);
			}
		}
		
		void swap(int &a,int &b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
		
		void heapify(int i)
		{
			int l=2*i+1;
			int r=2*i+2;
			int min=i;
			if(l<size && heap[min]>heap[l]) min=l;
			if(r<size && heap[min]>heap[r]) min=r;
			if(min!=i)
			{
				swap(heap[min],heap[i]);
				heapify(min);
			}
		}
		
		int parent(int i)
		{
			return floor((i-1)/2);
		}
		
		void insert(int key)
		{ int i=size;
		  heap.push_back(key);
		  size++;
		  while(i!=0 && heap[i]<heap[parent(i)] )
		  {
		  	swap(heap[i],heap[parent(i)]);
		  	i=parent(i);
		  }
		}
		int extract_min()
		{
			int key=heap[0];
			heap[0]=heap[size-1];
			heap.pop_back();
			size--;
			heapify(0);
			return key;
		}
		void display()
		{
			for(int i=0;i<size;i++) cout<<heap[i]<<" ";
			cout<<endl;
		}
	
};

int main()
{
	Heap heap;
	int c;
	do{
		cout<<"1.insert(key) 2.extract_min() 3.build_heap() 4.display 5.exit "<<endl;
		 cin>>c;
		switch(c)
		{  case 1: int key; cin>>key;
		          heap.insert(key);
		          break;
		   case 2 :key=heap.extract_min();
		           cout<<key<<endl;
		   case 3:heap.build_heap();
		          break;
		   case 4: heap.display();	
		}
	}while(c!=5);
	return 0;
}
