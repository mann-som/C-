#include<iostream>
using namespace std;

char getmaxoccurence(string s){

    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++){

        int num = 0;
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z'){

            num = ch - 'a';
        }
        else{

            num = ch -'A';
        }

        arr[num]++;
    }

    int maxi = -1, ans = 0;
    for(int i =0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;
}

int main(){

    string s;
    cin>> s;

    cout<< getmaxoccurence(s) << endl;
    return 0;

}
