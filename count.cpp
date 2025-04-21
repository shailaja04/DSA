#include <iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int> fl;
    fl.push_front(1);
     fl.push_front(8);
      fl.push_front(11);
    // auto l_it =fl.begin();
    int count=0;
    
for(auto it= fl.begin();it !=fl.end();it++)
{
  ++count;   
    
}
  cout<<"number of elements: "<<count<< endl;
    auto l_it =fl.begin();
  fl.insert_after(l_it,2);
  fl.insert_after(++l_it,3);
   fl.insert_after(++l_it,4);
   fl.insert_after(++l_it,5);
    for(auto it =fl.begin();it!=fl.end();it++)
{
    cout<<*it<<" ";
}

    return 0;
}