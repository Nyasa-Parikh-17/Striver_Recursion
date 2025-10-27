#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

int f(int ind,int s,int sum,int arr[],int n){
    if(s>sum) return 0;  // if array contains positive only
    if(ind==n){
        if(s==sum){
            return 1;
        }
        return 0;
        //return false 
    }
    s+=arr[ind];

    //technique to print only 1 answer 
    // base case trick   cond=>satisfied return true;
    // cond=>not satisfied =>return false

    //if(f()==true)  return;   or return false


    int l=f(ind+1,s,sum,arr,n);

    s-=arr[ind];
   

    //not pick;
    int r=f(ind+1,s,sum,arr,n);
    return  l+r;

}

// int f(){
// base case  
//     return  1->condn satisfied
//     retrun 0->cond not satisfied 

//     l=f();
//     r=f();
//     return l+r;
// }

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds;

    cout<<f(0,0,sum,arr,n);

}