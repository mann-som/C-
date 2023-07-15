#include<iostream>
using namespace std;

// char ch[10] functions
// 1. length = strlen(ch)
// 2. compare = strcmp(str1, str2)
// 3. copy = strcpy(dest, source)




int getlength(char name[]){

    int count = 0;

    for(int i = 0; name[i] != '/0'; i++){

        count++;
    }

    return count;
}

int reverse(char name[], int n){

    int s = 0;
    int e = n -1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int main(){

    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name: ";
    cout<< name << endl;

    cout<<"Lenght of your name: "<< getlength(name) << endl;

    return 0;
}



