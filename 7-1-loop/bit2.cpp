#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    cout<<"Enter the num1: ";
    cin>>num1;
    cout<<"Enter the num2: ";
    cin>>num2;
    cout<<"BEFORE SWAPPING: "<<num1<<" "<<num2<<endl;

    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;

    cout<<"AFTER SWAPPING: "<<num1<<" "<<num2;
}