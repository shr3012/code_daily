//Greatest of two numbers

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if(a>b){
        cout << "a is greater than b.";
    }else{
        cout << "b is greater than a." ;
    }
    return 0;
}