//Sum of AP Series
// sum = n/2 [ 2a + (n-1) d ]
// n --> no of terms; a --> first term; d--> common difference
// eg : n=4;a=2;d=2 ---> Output : 20 ----> 2+4=6+8 = 20

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,d;
    cin >> n ;
    cin >> a ;
    cin >> d;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a; // Add the current term to the sum
        a += d;   // Update the term by adding the common difference
    }
    //Method 2: DIRECT FORMULA
    //int sum = (n / 2) * (2 * a + (n - 1) * d);
    cout << sum;
    return 0;
}