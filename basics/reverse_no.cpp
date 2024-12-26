//Reverse Digits of a Number

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int temp = n;
    int rev = 0;
    while(n>0){
        int rem = n % 10;
        rev = rev*10 + rem;
        n = n / 10;
    }
    cout << "Reverse of no " << temp << " is " << rev;
    return 0;
}