#include<iostream>
using namespace std;

int main(){

    int arr[11] = {1, 2, 2, 3, 3, 2, 4, 1, 1, 3,};
    int count[10];
    int n, k =0;
    for(int i = 0; i < 11; i++){
        n = 0;
        for(int j = 0; j < 11; j++){

            if( arr[i] == arr[j]){

                n++;
            }
        }
        count[k] = n;
        k++;
    }
    cout<<"No. of repetitions: ";
    for(int i = 0; i<k; i++){
        cout<<count[k]<<" ";
    }

}