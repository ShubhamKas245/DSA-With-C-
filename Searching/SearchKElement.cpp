// search k element in array

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int k){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid]<k){
            s=mid+1;
        }else if(arr[mid]>k){
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Finding element"<<endl;

    cin>>k;
    
    int findingElemt=binarySearch(arr,n,k);
    cout<<"Index no is " <<findingElemt<<endl;

    return 0;
}