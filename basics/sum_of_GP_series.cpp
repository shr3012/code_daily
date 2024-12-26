//Sum of Gp series
/*
Finite GP Sum Formula
For a finite GP with the first term a and common ratio r, the sum of n terms is:
If r ≠ 1, Sn = a[(r^n - 1)/(r - 1)]
If r = 1, Sn = na
Infinite GP Sum Formula
For an infinite GP with the first term a and common ratio r, the sum is:
If |r| < 1, S∞ = a/(1 - r)
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,a,r;
    cin >> n ;
    cin >> a ;
    cin >> r;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a; // Add the current term to the sum
        a *= r;   // Update the term by adding the common difference
    }
    //Method 2: DIRECT FORMULA
    //int sum = (n / 2) * (2 * a + (n - 1) * d);
    cout << sum;
    return 0;
}