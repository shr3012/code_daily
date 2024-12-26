#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n, int r) {
    if (r > n) return 0; // Binomial coefficient is 0 if r > n
    int nFact = factorial(n);           // n!
    int rFact = factorial(r);           // r!
    int nMinusRFact = factorial(n - r); // (n-r)!
    return nFact / (rFact * nMinusRFact); // Binomial coefficient formula
}


int main(){
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    int result = nCr(n, r);
    cout << "Binomial Coefficient (C(" << n << ", " << r << ")) = " << result << endl;

    return 0;
}


