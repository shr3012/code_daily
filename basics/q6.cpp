// Alphabet ot Not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Char: "<< endl;
    cin >> ch;
    if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z'){
        cout<<"Alphabet";
    }else{
        cout<<"Not Alphabet";
    }
    return 0;
}