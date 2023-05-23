#include<iostream>
using namespace std;

int binary(int arr[], int size, int key){

    int start = 0;
    int end = (size - 1);
    int mid;


    while ( start <= end){
        
        mid = start + (end - start)/2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;
    
}

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 6;

    int sol = binary( arr, 10, 6 );
    if(sol == -1){
        cout<<"not present";
    }
    else
    cout<<"element present";
}