#include<bits/stdc++.h>
using namespace std;

int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}


int main(){
    
    int result = min(10,5);
    cout << result;
    return 0;
}