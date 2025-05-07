#include<iostream>
#include<iterator>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int>fl;
	forward_list<int>::iterator itr;
	fl={13,11,9,7,5,3,1};
	for(int x:fl)
	cout<<x<<" ";
	cout<<"\ninsert a number at end\n";
	itr=fl.begin();
	int pos=distance(fl.begin(),fl.end())-1;
	advance(itr,pos);
	fl.insert_after(itr,0);
	
	for(int x:fl)
	cout<<x<<" ";
	return 0;
	
}
