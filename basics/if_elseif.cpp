/*
Print student grade only if the student passed in all subjects:
-Display the Grade only if the student passed in all subjects.
-Minimum pass marks must be >=35
-If the average >= 60 then print "A-Grade" then 
print "B-Grade" If the average >= 50 
If the average >= 40 then print "C-Grade"
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int m1,m2,m3;
cout<<"Enter 3 marks :";
cin>>m1;
cin>>m2;
cin>>m3;
if(m1>=35 && m2>=35 && m3>=35){
    int avg = (m1+m2+m3)/3;
    if(avg>60){
        cout<<"Grade : A";
    }else if(avg>=50){
        cout<<"Grade : B";
    }else if(avg>=40){
        cout<<"Grade : C";
    }else{
        cout<<"Grade : D";
    }
}else{
    cout << "Student Failed";
}
return 0;
}