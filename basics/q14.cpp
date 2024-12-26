//Sum of N first natural number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    int sum=0;
    cout<<"Enter n: ";
    cin>> n;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    cout << sum;
    return 0;
}
