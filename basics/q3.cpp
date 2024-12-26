//Person can vote or not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter Age: " << endl;
    cin >> age;
    if(age>=18){
        cout<<"Can Vote" << endl;
    }else{
        cout<<"Can't vote" << endl;
    }
    return 0;
}