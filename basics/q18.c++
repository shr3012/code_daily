//factors of no
// no of factors 
// sum of factors
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<< "enter n:";
    cin>>n;
    int count=0;
    int sum=0;
    cout<<"factors of no are: ";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout << i<< endl;
            count++;
            sum = sum + i;
        }
    }
    cout << "no of factors: " << count<< endl;
    cout << "sum of factors: " << sum << endl;
    return 0;
}