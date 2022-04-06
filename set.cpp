#include<bits/stdc++.h>
using namespace std;
int main(){

    //set ke andr saare ke saare unique hote hai 5 baar 5 daala toh ek baar hi 5 aayega 
    //har element 1 baar hi aata hai 
    //implemented using bst 
    //sorted order mei element return hote hai 
    //unordered set is faster than slow because unordered mei random order mei aata hai 



    set<int> s; //maxheap

    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(9);
    //because bst mei element update nhi krte 

    for(auto i : s)
        cout<<i<<endl;

    cout<<endl;

    //s.erase(s.begin() + 1); //this gives error

    //s.erase(s.begin() ); //this does not give error 

    set<int>:: iterator it = s.begin(); // if +1 krna hai then
    it++;

    s.erase(it);
    for(auto i : s)
        cout<<i<<endl;

    cout<<endl; 
    cout<<"5 present or not? "<<s.count(5)<<endl; //batata hai ki 5 element hai ya nahi

    set<int>::iterator  itr = s.find(5); //5 ka iterator return krdega

    for(auto it = itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;    
    
}