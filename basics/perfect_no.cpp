// Find if Perfect no or not
// PERFECT NO: sum of factors except itself is equal to same no
// eg : 6 = 1*2*3 => 1+2+3 = 6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"enter n: ";
    cin>>n;
    int sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        cout<<"Perfect No";
    }else{
        cout<<"Not a perfect No";
    }
    return 0;
}
