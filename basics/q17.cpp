//EVEN NO IN B/W 1 TO 100
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            cout<< i << endl;
        }
    }
    return 0;
}