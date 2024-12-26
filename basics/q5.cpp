//vowel or not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character: ";
    cin >>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"Vowel";
    }else{
        cout<<"Not Vowel";
    }
    return 0;
}