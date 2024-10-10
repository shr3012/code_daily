//Fibonnaci Series : sum of two consectutive no is the next no
//eg : 0,1,1,2,3,5,8,13.......
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a = 0, b = 1, next;

    // Input: How many terms of Fibonacci series to generate
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << a << " " << b << " ";

    for (int i = 3; i <= n; i++) {
        next = a + b; // Calculate the next term
        cout << next << " ";
        a = b; // Update a to be the previous term
        b = next; // Update b to be the current term
    }

    return 0;
}