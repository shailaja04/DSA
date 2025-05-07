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
	int pos=1;
	for(auto it=fl.begin();it!=fl.end();++it,pos++)
	{
		cout<<"value"<<*it<<"\n";
		cout<<"pos"<<pos<<"\n";
		
		
	}
	
}
