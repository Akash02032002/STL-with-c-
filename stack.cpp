#include<bits/stdc++.h>
using namespace std;
int main(){
    //stack lifo  

    stack<string> s;

    s.push("somya");
    s.push("malgudi");
    s.push("hello");

    cout<<"top element "<<s.top()<<endl;

    s.pop();

    cout<<"top element "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;

}