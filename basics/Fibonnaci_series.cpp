//Fibonnaci Series : sum of two consectutive no is the next no
//eg : 0,1,1,2,3,5,8,13.......
//Logic ------->    f(n) = f(n-1) + f(n-2) :- 13 = 8 + 5
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a = 0, b = 1, next;

    // Input: How many terms of Fibonacci series to generate
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << a << " " << b << " ";
//i = 3 since loop is for terms and 2 terms a and b are already printed so from 3rd term we need to print.
    for (int i = 3; i <= n; i++) {
        next = a + b; // Calculate the next term
        cout << next << " ";
        a = b; // Update a to be the previous term
        b = next; // Update b to be the current term
    }

    return 0;
}