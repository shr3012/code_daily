//FACTORIAL OF A NO
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    int fact=1;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    cout << fact;
    return 0;
}