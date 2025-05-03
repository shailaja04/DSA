#include <iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main() {
    forward_list<int> fl;
    forward_list<int> :: iterator itr;
    fl.push_front(1);
    fl.push_front(8);
    fl.push_front(11);
    itr = fl.begin();
    int pos = distance(fl.begin(),fl.end())-1; //to insert value in index 3
    advance(itr,pos);
    fl.insert_after(itr, 2); 
    fl.insert_after(++itr, 3);

for(auto it = fl.begin();it != fl.end();it++){
    cout<<*it<<" ";
}
return 0;
}
