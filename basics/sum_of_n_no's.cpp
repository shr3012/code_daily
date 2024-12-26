// sum of n natural numbers

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter the no:";
    cin >> n;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}