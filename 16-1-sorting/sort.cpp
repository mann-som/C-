#include<iostream>
using namespace std;

void selection( int arr[], int size){

    for( int i = 0; i < size; i++ ){
        int minindex = i;
        for( int j = i + 1; j < size; j++)
        {

            if( arr[j] < arr[minindex]){
                minindex = j;
            }
        }

        swap(arr[minindex] , arr[i]);
    }

}

void bubble( int arr[], int size){

    for( int i = 0; i < size -1; i++){

        for( int j = 0; j < size -i -1; j++){
            
            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void insertion( int arr[], int size){

    for( int i = 1; i < size; i++){

        int temp = arr[i];
        int j = i - 1;

        while(j > 0){

            if(arr[j] > temp){
                
                arr[i] = arr[j];
            }
            else{

                break;
            }
            j--;    
        }
        arr[j+1] = temp;
    }
}
int main(){

    int arr[7] = { 3, 6, 5, 9, 10, 35, 26};
    insertion( arr, 7);
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
}