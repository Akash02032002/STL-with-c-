#include<bits/stdc++.h>
using namespace std;
//typedef pair<long long int,long long int> pi; if you want to make a minheap with v,i as index
int main(){

    //first element hamesha greatest i.e max heap
    //first element hamesha smallest i.e min heap
    //by default max heap
    
    priority_queue<pi,vector<pi>,greater<pi>> mini; //this has a heap and other special place which can take long long int value
    //mini.push(make_pair(arr[i],i));
    
    
    
    priority_queue<int> s; //maxheap

    priority_queue< int,vector<int>,greater<int> > mini;//minheap

    s.push(1);
    s.push(3);
    s.push(2);
    s.push(0);

    cout<<"size "<<s.size()<<endl;
    int n = s.size();
    for (int i = 0; i < n; ++i)
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;



    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout<<"size "<<mini.size()<<endl;
    n = mini.size();
    for (int i = 0; i < n; ++i)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"empty or not "<<mini.empty()<<endl;
}
