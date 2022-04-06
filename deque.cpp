#include<bits/stdc++.h>
using namespace std;
int main(){
    //deque or doubly ended queue
    //both end pe push pop dono krr skte ho yaha par multiple fix static arrays ka use krte hai 
    //random access is possible 

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front(); //back or front both
    for (int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"print zero index element "<<d[0]<<endl;

    d.push_back(2);
    cout<<"front "<<d.front()<<endl; // for first element
    cout<<"back "<<d.back()<<endl;   // for last element

    cout<<"empty or not "<<d.empty()<<endl; //empty hai kya ? 0 matlab empty nhi hai
    
    cout<<"before erase " << d.size()<<endl;

    d.erase(d.begin(),d.begin()+1); 

    cout<<"after erase " << d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}