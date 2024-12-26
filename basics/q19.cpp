#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<=500;i++){
        if((i%4==0)&&(i%100!=0)||(i%400==0)){
            cout << i << endl;
        }
    }
    return 0;
}