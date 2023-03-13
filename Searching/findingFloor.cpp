// find floor value of K

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int k){
    int s=0,e=n-1;
    int ans=INT8_MIN;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]<=k){
            ans=arr[mid];
            s=mid+1;
        }else {
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int NearestVal=binarySearch(arr,n,k);
     cout<<"Nearest Floor value of " <<k<< " is "<<NearestVal<<endl;
}