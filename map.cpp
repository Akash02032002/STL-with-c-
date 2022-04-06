#include<bits/stdc++.h>
using namespace std;
int main(){
    //data stores in form of key value form mei store hota hai
    // key = love value = score  so love is pointing to score 
    //key is unique and 1 key 1 ko hi point kregi
    //unoredered map mei O(1) complexity hashing
    //ordered map mei O(logn) complexity r-b or balanced tree

    map<int,string> m; //map ke case mei sorted order and unordered mei random

    m[1] = "babbar";
    m[2] = "somya";
    m[13] = "rahul";
    m[8] = "aviral";
    m[5] = "babbar";
    m[11] = "lol";

    m.insert({6,"usha"});

    cout<<"before erase"<<endl ;
    for(auto i: m)
        cout<<i.first<<" "<<i.second<<endl;

    cout<<endl;

    cout<<"finding 13 "<<m.count(13)<<endl; //kya 13 present hai?

    m.erase(6);

    cout<<"after erase"<<endl ;
    for(auto i: m)
        cout<<i.first<<" "<<i.second<<endl;

    cout<<endl;

    //find iterator return krta hai
    auto it = m.find(5);

    for (auto i = it; i != m.end(); ++i)
    {
        cout<<(*i).first<<endl;
    }

}