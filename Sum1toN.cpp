#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;


//functional recursion
int f(int n){
    if(n==0)  return 0;
    return n+f(n-1);
}

//parameterised recursion 
void sum_f(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    sum=sum+n;
    sum_f(n-1,sum);
}

//factorial 
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}

int main(){
    int i=f(8);
    cout<<i<<endl;
    int f=fact(5);
    cout<<f<<endl;
    sum_f(5,0);
}