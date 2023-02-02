// Google Interview Question

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cout<<"Number of quries"<<endl;
    cin>>q;
    while(q--){
        int l,r,value;
        cin>>l>>r>>value;
        arr[l]+=value;
        arr[r+1]-=value;
    }
    
    //calculate prefix sum
    int ps[n];
    ps[0] = arr[0];
    for(int i=1; i<n; i++) {
        ps[i] = ps[i-1] + arr[i];
    }


    //print prefix sum
    for(int i=0;i<n;i++){
        cout<<ps[i] << " ";
    }
    cout<<endl;
}