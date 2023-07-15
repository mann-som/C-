#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> st;

    st.push("Mann");
    st.push("loves");
    st.push("taneesha");

    cout<<"top element: "<<st.top()<<endl;

    st.pop();
    cout<<"top element: "<<st.top()<<endl;
}