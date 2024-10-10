// count even no and odd no b/w 1 to n
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    int even_count=0;
    int odd_count=0;
    for(i=14;i<=26; i++){
        if(i%2==0){
            even_count++;
        }else{
            odd_count++;
        }
    }
    cout<< "Even: " << even_count<< endl;
    cout << "odd: "<< odd_count<<endl;
    return 0;
}