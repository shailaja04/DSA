#include<iostream>
#include<iterator>
#include<forward_list>
using namespace std;
int main()
{
	//create a list
	int n,ele;
	forward_list<int>fl;
	forward_list<int>::iterator itr;
//insert a values
	cout<<"enter n value";
	cin>>n;
	cout<<"enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		fl.push_front(ele);
		
	}
	cout<<"elements after inserted\n";
	for(int x:fl)
	cout<<x<<" ";
	// insert 27 at 4
	
	auto it=fl.begin();
    cout<<"\ninsert 27\n";
       advance(it,4);
       fl.insert_after(it,27);
       for(int x:fl)
	cout<<x<<" ";
	//remove ele at 12
	cout<<"\nremove 12\n";
       fl.remove(12);
       for(int x:fl)
	cout<<x<<" ";
	//inser at end 32
	cout<<"\ninsert a elements at end 32\n";
	it=fl.begin();
	int pos=distance(fl.begin(),fl.end())-1;
	advance(it,pos);
	fl.insert_after(it,32);
	 for(int x:fl)
	cout<<x<<" ";
//insert ele11,15,27,11
	cout<<"\n insert 11,15,27,11\n";
	fl.push_front(11);
	fl.push_front(15);
	fl.push_front(27);
	fl.push_front(11);
	for(int x:fl)
	cout<<x<<" ";
	//sorting
	cout<<"\n sort elements\n";
	fl.sort();
	for(int x:fl)
	cout<<x<<" ";
	//unique
	fl.unique();
	cout<<"\n final elements\n";
	for(int x:fl)
	cout<<x<<" ";
	//reverse list
	cout<<"\nreverse of a list\n";
	fl.reverse();
	for(int x:fl)
	cout<<x<<" ";
	//count elements
	 int count=distance(fl.begin(),fl.end());
	 cout<<"number of nodes"<<count<<" ";
	 //find the middle ele
	 int mid;
	 mid=count/2;
	  it =fl.begin();
//	 for(int i=0;i<mid;i++)
//	 {
//	
//	 it++;
//     }
	 cout<<"\n enter middle ele\n";
	 cout<<*it<<" ";
	 //
	 
     cout<<"\ninsert a after middle values\n";
     it=fl.begin();
     advance(it,mid-1);
     fl.insert_Middle(it,7);
	 for(int x:fl)
	 {  
	 	cout<<x<<" ";
	  } 
}

