#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    int s = a + b;
    return s;
}

int sumofNnos(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}


int main(){
    
    int result = sumofNnos(5);
    cout << result;
    return 0;
}