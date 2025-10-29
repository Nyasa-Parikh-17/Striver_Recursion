#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

void f(int i,int n){
    if(i>n) return;
    cout<<n<<endl;
    f(i,n-1);
}

void f_1(int n){
    if(n<1) return;
    cout<<n<<endl;
    f_1(n-1);
}

int main(){
     int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    // f(2,n);
    f_1(7);
}