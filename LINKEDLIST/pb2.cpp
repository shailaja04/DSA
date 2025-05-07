#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int>fl;
	fl.push_front(1);
    fl.push_front(3);
	fl.push_front(5);
	fl.push_front(7);
	fl.push_front(9);
	fl.push_front(11);
	fl.push_front(13);
	
	for(int x:fl)
	cout<<x<<" ";
	cout<<"\nreserve of a list\n";
	fl.reverse();
	for(int x:fl)
	cout<<x<<" ";
	
}
