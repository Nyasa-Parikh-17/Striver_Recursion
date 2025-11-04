#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

//to return only one input the function should be bool  instead of void 
void f(int ind,vector<int> &ds,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum){
            for (auto it:ds)  cout<<it<<" ";
            cout<<endl; 
            //return true
        }
        return;
        //return false 
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];

    //technique to print only 1 answer 
    // base case trick   cond=>satisfied return true;
    // cond=>not satisfied =>return false

    //if(f()==true)  return;   or return false


    f(ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    ds.pop_back();

    //not pick;
    f(ind+1,ds,s,sum,arr,n);

}


// to return 1 answer only 
bool fun(int ind,vector<int> &ds,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum){
            for (auto it:ds)  cout<<it<<" ";
            cout<<endl; 
            return true;
        }
        return false; 
    }

    ds.push_back(arr[ind]);
    s+=arr[ind];

    //technique to print only 1 answer 
    // base case trick   cond=>satisfied return true;
    // cond=>not satisfied =>return false

    //if(f()==true)  return;   or return false


   if(fun(ind+1,ds,s,sum,arr,n)==true){
    return true;
   }

    s-=arr[ind];
    ds.pop_back();

    //not pick;
    if(fun(ind+1,ds,s,sum,arr,n)==true){
        return true;
    }
    return false;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds;

    f(0,ds,0,sum,arr,n);
    fun(0,ds,0,sum,arr,n);  // do dry run 

}