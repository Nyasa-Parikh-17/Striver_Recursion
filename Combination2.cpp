#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

//GOOD QUESTION   ==> DO DRY Run 
//TC=2^N*K    SC=o(K*X)
void findCombination(int ind,int target,int arr[],vector<vector<int>> &ans,vector<int> &ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++){
        if(i>ind; && arr[i]==arr[i-1]) continue;
        if(arr[i]>target)  break;
        ds.push_back(arr[i]);
        findCombination(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
}

int main(){
    int arr[]={1,1,1,2,2};  //each number only once 
    int target =4;  //each combination has to be in sorted order
    // only unique combinations 
    //array should be sorted or write a function to sort
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0,target,arr,ans,ds)

    // changes in combination1 ; like take hash set of vector of vector of ans and print for unique elements 
    //but interview will not like 

    //therefore optimal approach 


}