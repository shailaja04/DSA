#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
	forward_list<int>fl;
	forward_list<int>::iterator itr;
	fl={7,5,3,1};
	for(int x:fl)
	cout<<x<<" ";
	int count;
	count=distance(fl.begin(),fl.end());
	cout<<"\n no of nodes"<<count<<" ";
	cout<<"\nmiddle no of element in list\n";
	int  mid;
	mid=count/2;
	itr=fl.begin();
	for(int i=0;i<mid;i++)
	 {
	 itr++;
     }
	cout<<*itr<<" ";
	cout<<"\nenter 9\n";
	fl.push_front(9);
	for(int x:fl)
	cout<<x<<" ";
		cout<<"\nmiddle no of element in list\n";
	itr=fl.begin();
	for(int i=0;i<mid;i++)
	{
		itr++;
	}
	cout<<*itr<<" ";
    
}
