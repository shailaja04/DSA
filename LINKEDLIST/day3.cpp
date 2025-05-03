int main() {
    std::forward_list<int> fl{1,2,3};
    std::forward_list<int> :: iterator itr;
    fl.push_front(4);
    fl.emplace_front(6);
    fl.insert_after(fl.before_begin(),11);
    itr = fl.begin();
    int pos = distance(fl.begin(),fl.end())-1;
    advance(itr,pos);
    fl.insert_after(itr,5);
    fl.sort();
    for(int x:fl)
    std::cout<<x<<" ";
    std::cout<< std::endl;
    fl.unique();//used to remove side by side same elements
    fl.reverse();
    for(int x:fl)
    std::cout<<x<<" ";
    
    if(fl.empty()==0)
    std::cout<< "list | container have elements"<<std::endl;
    else std::cout<<" list | container is empty"<< std::endl;
    for(int x : fl){
        std::cout<< x << " ";
    }
    return 0;
}
