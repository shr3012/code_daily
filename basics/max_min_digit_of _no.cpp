//Maximum and Minimum Digit in a Number

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the no : ";
    cin >> n;
    int max = 0;
    int min = 9;//initialize min to highest single digit 
    while(n>0){
        int rem = n % 10;
        if(rem>max){
            max = rem;
        }
        if(rem<min){
            min = rem;
        }
        n = n/10;
    }
    cout << "Maximum digit: " << max << endl;
    cout << "Minimum digit: " << min << endl;

    return 0;
}