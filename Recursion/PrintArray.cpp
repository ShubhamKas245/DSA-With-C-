#include<iostream>
using namespace std;

void fun(int *arr,int idx,int n){

    if(idx==n){
        return;
    }
      cout<<arr[idx]<< " ";
    
     fun(arr,idx+1,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fun(arr,0,n);

    return 0;
}