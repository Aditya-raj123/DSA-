#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    // putting the element from temp to again st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();

    }
       cout<<endl;
}
void removekthelement(int k,stack<int>&st){
    stack<int>st2;
    k--;
    while(k--){
        st2.push(st.top());
        st.pop();
    }
    st.pop();
    while(!st2.empty()){
        st.push(st2.top());
        st2.pop();
    }
}

int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    removekthelement(3,st);
    print(st);

    return 0;
}