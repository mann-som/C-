#include<iostream>
using namespace std;

// void swap(int num1, int num2){

//     int i, temp;
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//     cout<<num1<<" "<<num2<<" ";
//     // return num1, num2;

// }

int main(){

    int arr[11] = { 2, 4, 6, 23, 78, 56, 45, 12, 19, 14, 15};
    int num1, num2;
    for (int i = 0; i < 10; i=i+2)
    {
        
        num1 = arr[i];
        num2 = arr[i+1];
        swap(num1, num2);
        cout<<num1<<" "<<num2<<" ";
        // arr[i] = num1;
        // arr[i+1] = num2;
        // cout<<arr[i]<<" "<<arr[i+1]<<" ";
    }
    // for (int i = 0; i < 10; i++)
    // {
        
    //     cout<<arr[i]<<" ";

    // }
    

}