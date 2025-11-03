#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
using namespace std;

//TC =2^n +2^nlog(n)    //func is correct 
//find how to print

void func(int ind,int sum,vector<int> &arr,int N,vector<int> &sumSubset){
    if(ind==N){
        sumSubset.push_back(sum);
        return;
    }

    //pick an element
    func(ind+1,sum+arr[ind],arr,N,sumSubset);

    //do not pick an element 
    func(ind+1,sum,arr,N,sumSubset);
}
//this is copied 
// vector<int> subsetSum(vector<int> arr,int n){
//         vector<int> sumSet;
        // func(0,0,arr,N,sumSubset);
        // sort(sumSubset.begin(),sumSubset.end());
        // return sumSubset;
    // }


int main(){
    //Given list of all N integers,print sum of all subsets in it.Output should be in increasing order 
    //brute ==> to pritn power set 2^n*N 

    //optimal ==>recursion 
    // vector<int> subsetSum(vector<int> arr,int n){
    //     vector<int> sumSet;
    //     func(0,0,arr,N,sumSubset);
    //     sort(sumSubset.begin(),sumSubset.end());
    //     return sumSubset;
    // }
}