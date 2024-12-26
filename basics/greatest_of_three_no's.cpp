//Greatest of three numbers

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    cout << "Enter values of a, b and c : " << endl;
    cin >> a >> b >> c;
    if(a > b && a > c){
        cout<<"a is largest";
    }else if(b > a && b > c){
        cout << "b is the largest";
    }else{
        cout << "c is the largest";
    }
    return 0;
}
