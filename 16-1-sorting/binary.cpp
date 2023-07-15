#include<iostream>
using namespace std;

int firstocc(int arr[], int size, int key){

    int start = 0;
    int end = (size - 1);
    int mid;
    int  first = 0;

    

    while ( start <= end){
         mid = start + (end - start)/2;
        if(arr[mid] == key){
            first = mid;
            end = mid -1;
        }

         if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
 
    return first;
    
}
int lastocc(int arr[], int size, int key){

    int start = 0;
    int end = (size - 1);
    int mid;
    int  last = 0;

    

    while ( start <= end){
         mid = start + (end - start)/2;
        if(arr[mid] == key){
         last = mid;
            start = mid +1;
        }

         if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return last;
    
}
int main(){

    int arr[10] = {1, 2, 3, 4, 6, 6, 6, 6, 9, 10};
    int key = 6;

    int first = firstocc( arr, 10, 6 );
    int last = lastocc( arr, 10, 6 );
    
    cout<<"first occurence: "<<first<<" last occurence: "<<last;
}