#include<iostream>
#include<vector>

using namespace std;

int main(){

// dynamic, it doubles the capacity everytime exceeding size
// size = no. of elements in vector rn
// capacity = total capactiy of vector
    vector<int> vec;
    cout<<"capacity-> "<<vec.capacity()<<endl;

    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
// copying a vector into another vector
    vector<int> b(a);
    for( int i:b){
        cout<<i<<" ";
    }
    cout<<endl;
// push_back to push ELEMENT in vector
    vec.push_back(1);
    cout<<"capacity-> "<<vec.capacity()<<endl;
    cout<<"size-> "<<vec.size()<<endl;
    
    vec.push_back(2);
    cout<<"capacity-> "<<vec.capacity()<<endl;
    cout<<"size-> "<<vec.size()<<endl;
    
    vec.push_back(3);
    cout<<"capacity-> "<<vec.capacity()<<endl;
    cout<<"size-> "<<vec.size()<<endl;

// element at specific postion
    cout<<"Element at 2nd posotion "<<vec.at(2)<<endl;

// printing vector
    for( int i:vec){
        cout<<i<<" ";
    }


// pop_back removes last element
    vec.pop_back();
    for( int i:vec){
        cout<<i<<" ";
    }

// clearing a vector, it clears size not capacity
    vec.clear();
    for( int i:vec){
        cout<<i<<" ";
    }
}
