#include<bits/stdc++.h>
using namespace std;
int main(){
    //stack lifo  

    queue<string> s;

    s.push("somya");
    s.push("malgudi");
    s.push("hello");

    cout<<"first element "<<s.front()<<endl;

    cout<<"size of queue "<<s.size()<<endl;

    s.pop();

    cout<<"first element "<<s.front()<<endl;

    cout<<"size of queue after pop "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;

}