#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

//you can pick an element many times 

void f(int ind,int target,vector<int> &ds,int arr[],vector<vector<int>> &ans,int size){   //tc=2^t*k   sc=k*x
    if(ind==size){
        if(target==0){
           ans.push_back(ds);
        }
        return;
    }

   if(arr[ind]<=target){
    ds.push_back(arr[ind]);
    f(ind,target-arr[ind],ds,arr,ans,size);
    ds.pop_back();
   }

   f(ind+1,target-arr[ind],ds,arr,ans,size);
  
}

int main(){
    int arr[]={2,3,6,7};
    int n=3;
    int sum=2;
    vector<int> ds;
    vector <vector<int>> ans;

    f(0,7,ds,arr,ans,4);   //i dont know how to print
    
}