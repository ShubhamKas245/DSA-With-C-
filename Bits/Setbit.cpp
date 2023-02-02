
// Find ith bit set or not

#include <iostream>
using namespace std;

bool setBit(int n, int i)
{
    return (n) & (1 << i);
}

int main()
{
    int n, i;
    cin >> n >> i;
   if(setBit(n,i)&1==1){
    cout<<"set bit"<<endl;
   }else{
    cout<<"unset bit"<<endl;
   }
   return 0;
}