#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int min,max;
    cout << "Enter the min and max value: ";
    cin >> min;
    cin >> max;
    int count = 0;
    //initilize min and max value of range
    for(int i=min;i<=max;i++){
        int count = 0; //set count as 0.
        //initialize j such that it represent divisor of i
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count = count + 1;
            }
        }
        if(count == 2){
        cout << i << endl;
        }
    }
    return 0;
}