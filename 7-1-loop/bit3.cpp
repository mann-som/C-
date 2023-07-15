#include<iostream>
using namespace std;

int main(){

    int num, i, mask;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the bit position: ";
    cin>>i;

    mask = 1<<i;
    if( num&mask == 0){

        cout<<"0";
    }
    else{
        cout<<"1";
    }
}