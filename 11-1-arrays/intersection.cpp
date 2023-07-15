#include<iostream>
using namespace std;

int main(){

    int arr1[5] = { 3, 6, 4, 7, 5};
    int arr2[5] = { 5, 2, 7, 9, 4};
    int k = 0;
    int arr3[10];

    for(int i = 0; i <5; i++){

        for(int j = 0; j<5; j++){

            if( arr1[i] == arr2[j]){

                arr3[k] = arr1[i];
                // cout<<arr1[i]<<" ";
                k++;
            }

        }

    }

    for(int i =0; i <k; i++){

        cout<<arr3[i]<<" ";

    }

}