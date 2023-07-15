#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0; i<size; i++){

        if(arr[i]==key){
            return 1;
        }

    }
    return 0;
}

int main(){

    int key;
    int arr[10] = {0, 23, 5, 34, 23, 35, 27, 3, 7, 19};
    cout<<"Enter the key to search";
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Element found";
    }
    else{
        cout<<"not found";
    }
}