#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    // container 1.insert 2.delete 
     // add elements [10, 18,2, 5, 7, 4, 12, 1]
    cout<<"insert the elements ";
   forward_list<int> fl={10,18,2,5,7,4,12,1};
  
   for(const int& x:fl){
   
   cout<<x<<" " ;
   
  }
  cout<<endl;
   //remove elements[10,5,12]
  cout<<"remove the elements ";
  fl.remove(10);
    fl.remove(5);
     fl.remove(12);
     for(const int& x:fl){
   
  cout<<x<<" " ;
   
  }
  cout<<endl;

   //insert elements 16after 7//iterator
  auto itr=fl.begin();//begin is return index value
  advance(itr, 2);
   
  fl.insert_after(itr, 16);
  
  for(int x: fl)
  {
      cout<<x<<" ";
  }
  cout<<endl;
   
  auto x=fl.begin();
 advance(x, 0);
  
  fl.insert_after(x, 6);
  for(int x: fl)
  {
      cout<<x<<" ";
  }
  
  //insert elements 16after 7
  //insert elements 6 after 18
  //print all the elemts of the list
//   for(const int& x:f1){
   
//   cout<<x<<" " ;
   
//   }

    return 0;
}