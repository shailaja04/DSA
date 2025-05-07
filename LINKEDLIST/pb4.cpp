#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int>fl;
	fl={13,11,9,7,5,3,1};
	for(int x:fl)
	cout<<x<<" ";
	cout<<"\ninsert a node at begining\n";
	
	fl.push_front(0);
	for(int x:fl)
	cout<<x<<" ";
}
