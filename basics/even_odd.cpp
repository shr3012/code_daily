// EVEN No. - divisible by 2
// ODD No. - not divisible by 2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the no: ";
    cin >> n;
    if(n%2==0){
        cout << "No is Even";
    }else{
        cout << "No is odd";
    }
    return 0;
}