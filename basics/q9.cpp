//  PRInt 15 12 9 6 3 0
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    for(i=15;i>=0; i=i-3){ // if directly putting i-3 it is showing infinite output
        cout<< i << " ";// endl will give in new line and using (<< " ") in same line with space
    }
    return 0;
}