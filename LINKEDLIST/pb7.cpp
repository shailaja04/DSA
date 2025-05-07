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
	
//     int count;
//     count=distance(fl.begin(),fl.end());
//     cout<<"\nnumber of nodes\n"<<count<<" ";
//    int mid;
//    mid=count/2;
//    itr=fl.begin();
////    for(int i=0;i<mid;i++)
////    {
////    	itr++;
////	}
//	cout<<"\nmiddle ele\n";
//	cout<<*itr<<" ";
	cout<<"\ninsert a element at middle 9\n";
	itr=fl.begin();
	
	advance(itr,1);
	fl.insert_after(itr,9);
	for(int x:fl)
	cout<<x<<" ";
    cout<<"\ninsert  a ele 11 after 9\n";
	advance(itr,1);
	fl.insert_after(itr,11);
	for(int x:fl)
	cout<<x<<" ";
	cout<<"\ninsert  a ele 13 after 11\n";
	advance(itr,1);
	fl.insert_after(itr,13);
	for(int x:fl)
	cout<<x<<" ";
    }

