#include<iostream>
using namespace std;

int main(){

    int arr[11] = {1, 6, 4, 6, 2, 4, 3, 5, 5, 2, 1};
    int sol, count;
    for( int i = 0; i < 11; i++){
        count = 0;
        for( int j = 0; j < 11; j++){
            // sol = 0;
            // if( i == j){
            //     continue;
            // }
            sol = arr[i]^arr[j];
            if( sol == 0){
                count++;
            }

        }
    if( count == 1){
        cout<<arr[i]<<" ";
    }
    }

    // int sol = arr[0]^arr[1]^arr[2]^arr[3]^arr[4]^arr[5]^arr[6]^arr[7]^arr[8]^arr[9]^arr[10];
    // cout<<sol;
}