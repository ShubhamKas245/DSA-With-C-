// You have given sorted array n find frequency of integer K

#include<iostream>
using namespace std;

int firstOccurence(int arr,int n,int k){
    // define search space
    int s=0,e=n-1;
     int ans=-1;
     while(s<=e){
        int mid=(s+e)/2;
        // ignore right side
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        // ignore left side    
        }else if(arr[mid]<k){
            s=mid+1;
        // ignore right side    
        }else if(arr[mid]>k){
            e=mid-1;
        }
     }
     return ans;
}

int lastOccurence(int arr,int n,int k){
    // define search space
    int s=0,e=n-1;
     int ans=-1;
     while(s<=e){
        int mid=(s+e)/2;
        // ignore left side
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;    // only 1 change in last occurence
        }else if(arr[mid]<k){
            // ignore left side
            s=mid+1;
            // ignore right side
        }else if(arr[mid]>k){
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
    int x=firstOccurence(arr,n,k);
    if(x==-1){
        return 0;
    }
    int y=lastOccurence(arr,n,k);
    if(y==-1){
        return y-x+1;
    }
    return 0;
    
}