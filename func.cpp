#include<iostream>
using namespace std;

void fib(int n){

    int sum, n1 =0, n2=1;
     cout<<n1<<" "<<n2<<" ";
     for(int i=0; i<=n-2; i++){
        
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        cout<<sum<<" ";
     }
}
int main(){
    
    int n;
    cout<<"Enter the nth term";
    cin>>n;
    fib(n);
}