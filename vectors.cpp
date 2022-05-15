#include<bits/stdc++.h>
using namespace std;
int main(){
    //vector is dynamic array
    //vector apna size double krdeta hai when it gets full

    vector<int> v;

    vector<int> a(5,1); //a(size,initialize with?) for initialization
    cout<<"printing a"<<endl;
    for (int i : a)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    vector<vector<int> > dp(n ,vector<int>(v , -1)); //dp[n][v] initialized with -1
    
    vector<int> adj[];          //adjacency list 
 

    vector<int> d(a); //a ke saare element d ke and aagaye 
    cout<<"printing d"<<endl;
    for (int i : d)
    {
        cout<<i<<" ";
    }cout<<endl;


    cout<<"capacity "<<v.capacity()<<endl; 

    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(3); //size double hogaya
    cout<<"capacity "<<v.capacity()<<endl;

    cout<<"size "<<v.size()<<endl; // for size 

    cout<<"element at 2nd index "<< v[2]<<endl;  //direct access

    cout<<"front "<<v.front()<<endl; // for first element
    cout<<"back "<<v.back()<<endl;   // for last element

    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;



    return 0;
}
