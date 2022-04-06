#include<bits/stdc++.h>
using namespace std;
int main(){
    //stl algo

    vector<int> v;

    v.push_back(1);
    v.push_back(14);
    v.push_back(153465);
    v.push_back(17876);
    v.push_back(145);
    v.push_back(1643);
    v.push_back(1132);
    v.push_back(13);

    cout<<"finding 14  "<<binary_search(v.begin(),v.end(),14)<<endl;

    //ab iterator chiye rather than element 

    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),14) - v.begin()<<endl;

    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),14) - v.begin()<<endl;

    int a = 3,b = 5;

    cout<<"max "<<max(a,b);

    cout<<" min "<<min(a,b);

    swap(a,b);
    cout<<endl<<"a "<<a<<endl;

    string s = "abcd";

    reverse(s.begin(),s.end());

    cout<<"string "<<s<<endl;

    rotate(v.begin(),v.begin() +1,v.end());

    cout<<"after rotate"<<endl;
    for (int i :v)
    {
        cout<<i<<" ";
    }

    cout<<endl<<"after sorting"<<endl;
    sort(v.begin(),v.end());//introsort quick,heap and insertion
    for (auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}