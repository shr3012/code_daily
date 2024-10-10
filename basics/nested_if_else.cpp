// ELIGIBLE TO DENOTE BLOOD OR NOT
//age>18 age <50 && gender m or f && weight >40 7 w <=70
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age, weight;
    char gender;
    cout<<"Enter Age: "<< endl;
    cin>>age;
    cout<<"Enter Weight: "<< endl;
    cin>>weight;
    cout<<"Enter gender: "<< endl;
    cin>>gender;
    if(gender=='M'||gender=='m'||gender=='F'||gender=='f'){
        if(age>=18 && age<=50){
            if(weight>=40 && weight<=70){
                cout<<"Can Donate Blood";
            }else{
                cout<<"Invalid Weight";
            }
        }else{
            cout<<"Invalid Age";
        }
    }else{
        cout<<"Invalid Gender";
    }
    return 0;
}