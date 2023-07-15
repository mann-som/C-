#include<iostream>
using namespace std;


// int bitchecker(int num, int n){

//     cout<< ( num&(n<<n) );

// }

int main(){

    int num, n;
    cout<<"Enter the number: ";
    cin>>num;
    
    if( num&1){

        cout<<" number is odd";

    }
    else{

        cout<<" number is even";

    }


 }