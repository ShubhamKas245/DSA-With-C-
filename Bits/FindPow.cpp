// Find power of 2n

#include <iostream>
using namespace std;

int power(int n)
{
    return 1 << n;
}

int main()
{
    int n;
    cin >> n;
    int pow = power(n);
    cout<< pow << endl;
}