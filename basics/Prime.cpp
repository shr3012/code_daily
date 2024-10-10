//Check PRIME NUMBER
// PRIME NUMBER : have only 2 factor 1 and the no itself.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    int count=0;
    cout<<"enter n:";
    cin>> n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"The give no is prime";
    }else{
        cout<< "Not Prime";
    }
    return 0;
}