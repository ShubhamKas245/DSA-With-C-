
// -3 6 2 4 5 2 8 -9 3 1
#include <iostream>
using namespace std;

void printPrefix(int arr[],int n,int ps[]){
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
      ps[i]=ps[i-1]+arr[i];
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ps[n];
    printPrefix(arr,n,ps);
    
    for(int i=0;i<n;i++){
        cout<<ps[i]<<" ";
    }
    cout<<endl;

cout<<"Number of Quries"<<endl;
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cout<<"Index"<<endl;
        cin>>l>>r;
        if(l==0){
            cout<<ps[r] <<endl;
        }else{
            cout<<(ps[r]-ps[l-1])<<endl;
        }
    }

}

