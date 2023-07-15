#include<iostream>
#include<array>
using namespace std;

int main(){

// array< datatype, size> name
    array<int, 5> arr = {1, 2, 3, 4, 5};

// arr.size = size of array
    int size = arr.size();
    cout<<"Size of array is "<<size<<endl;

    for(int i = 0; i < size; i++){

        cout<<arr[i]<<" ";
    }

// arr.at(position) element at specific position
    cout<<" Element at 3rd position : "<<arr.at(3);

// arr.empty to check if array is empty or not, BOOLEAN
    cout<<" Empty or not "<<arr.empty();

// arr.front() and arr.back() for first and last element
    cout<<"First element "<<arr.front();
    cout<<"last element "<<arr.back();
}