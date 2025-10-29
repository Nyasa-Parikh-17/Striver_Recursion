// When a function calls itself 
//base condition => conditio where recursion would end

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

void f(int i,int n){   //TC=o(N)   SC=O(N)
    if(i>n)  return;
    cout<<"Nyasa"<<endl;
    f(i+1,n);
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    f(1,n);
}