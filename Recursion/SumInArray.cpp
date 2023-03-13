#include<iostream>
using namespace std;

int sum(int *arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }

    return arr[idx]+sum(arr,idx+1,n);
}

int main(){
    int n=5;
    int arr[]={1,4,8,3,7};
    cout<<sum(arr,0,n)<<endl;

    return 0;
}