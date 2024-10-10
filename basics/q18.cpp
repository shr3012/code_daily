//sum of even no and odd no b/w 1 to n
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter n:";
    cin>>n;
    int even_sum=0;
    int odd_sum=0;
    for(i=1;i<=n;i++){
        if(i%2==0){
            even_sum=even_sum+i;
        }else{
            odd_sum=odd_sum+i;
        }
    }
    cout<<"Even no sum: " << even_sum<< endl;
    cout<<"Odd no sum: " << odd_sum << endl;
    return 0;
}