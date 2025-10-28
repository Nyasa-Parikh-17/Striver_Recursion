#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

void f(int i,int n){
    if(i>n)  return;
    cout<<i<<endl;
    return f(i+1,n);
}

//Bactracking
void fun(int i,int n){
    if(i<1) return;
    fun(i-1,n);
    cout<<i<<endl;

}

//my approach   wont work for negative i guess
void f_1(int n){
    if (n==0) return ;
    f_1(n-1);
    cout<<n<<endl;
}

int main(){
     int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    // f(1,n);
    // fun(3,3);
    f_1(n);
}