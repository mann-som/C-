#include<iostream>
using namespace std;

// bool ispresent(int arr[][5], int target, int row, int col){

//     for(int i = 0; i < 5; i++){

//         for(int j = 0; j < 5; j++){
//             if(arr[i][j] == target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

int main(){

    int arr[5][5];

    cout<<"Enter the element of array: ";

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Printing the array: ";
    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // int target;
    // cout<<"Enter the element to search: ";
    // if(ispresent(arr, target, 4, 5)){
    //     cout<<"Element is present";
    // }
    // else{
    //     cout<<"Element is not present";
    // }

    return 0;
}