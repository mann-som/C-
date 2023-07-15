#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> dq;

// pushing element at front
    dq.push_back(1);
//  pushing element at back
    dq.push_front(2);

    for(int i:dq){
        cout<<i<<" ";
    }

// size
    int size = dq.size();

// printing at specific positions

    cout<<"First: "<<dq.at(0);
    cout<<"last: "<<dq.back();

//  empty or not
    cout<<"empty or not: "<<dq.empty();

//  erasing
    cout<<endl;
    cout<<"Before ereasing: "<<dq.size();
    dq.erase(dq.begin(), dq.begin()+1);
    cout<<"After erasing: "<<dq.size();

// size is 0 after erase but max size is same as starting
 

}