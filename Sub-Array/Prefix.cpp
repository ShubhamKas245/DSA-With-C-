// Given with array N :
// q quries start l & end r , find sum of the sub-array from l to r

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// Function to print the array.
void printArray(int *a, int n) {
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int *findPrefixSum(int *a,int n){

// Defining the prefix Sum array
    int *prefixSum=new int[n];

 // Assigning a[0] to prefixSum[0]
    prefixSum[0]=a[0]; 

    //iterating from i=1 to i=n-1
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+a[i];
    }
    return prefixSum;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      // Printing the prefixSum array.
    cout << "The prefix sum array is -" << endl;
    int *prefixSumArray=findPrefixSum(arr,n);
    printArray(prefixSumArray,n);

    return 0;
}