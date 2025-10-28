#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

bool f(int i,string &s){  //TC=o(N/2)
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1])  return false;
    return f(i+1,s);
}

int main(){
    string s="madam";
    cout<<f(0,s);
    return 0;
}