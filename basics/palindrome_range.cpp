#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int min, max;
    cout << "Enter min value: ";
    cin >> min;
    cout << "Enter max value: ";
    cin >> max;
    for(int i = min; i <= max; i++){
        int original = i;
        // store i in temporary variable for calculation
        //temp is essential to avoid modifying the loop control variable i.
        //Without temp, the loop and comparison logic will fail, leading to incorrect or no results.
        int temp=i;
        int rev = 0;
        while(temp > 0){
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if(original == rev){
            cout << original << " is a Palindrome" << endl;
        }
    }
    return 0;
}