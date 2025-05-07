#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	int n,ele;
	forward_list<int>fl;
	cout<<"enter the n value";
	cin>>n;
	cout<<"enter the ele";
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		fl.push_front(ele);
		
	}
	cout<<"Display";
	for(int x:fl){
		cout<<x<<" ";
	}
	
return 0;	
}

