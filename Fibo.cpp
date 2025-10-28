#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

int f(int n){
    if(n<=2 && n>0)  return 1;
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;
}

int main(){   //TC=2^n (approx)
    cout<<f(10)<<endl;
}