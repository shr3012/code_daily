//  PRINT no in range(m,n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,m,n;
    cout<<"Enter value of m and n: ";
    cin >> m;
    cin >> n;
    for(i=m;i<=n;i++){
        cout<< i << endl;// endl will give in new line and using (<< " ") in same line with space
    }
    return 0;
}