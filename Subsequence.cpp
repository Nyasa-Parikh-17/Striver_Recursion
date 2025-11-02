#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

//sunsequence can be contiguos or non-contiguous 
// subsequence eg:{1,2,3}  its subsequence are 1,2,3,{1,2},{2,3},{1,3},{1,2,3}

// ** VERY VERY IMPORTANT QUESTION   //TC=2^n *n  SC=O(N)
void Recursion(int i,vector<int> ds,int arr[],int n){
    if(i==n){
        for(auto it :ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //take or pick condition
    ds.push_back(arr[i]);
    Recursion(i+1,ds,arr,n);
    ds.pop_back();

    //not pick or not take 
    //not added to subsequence
    Recursion(i+1,ds,arr,n);

}

int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    Recursion(0,ds,arr,n);

}