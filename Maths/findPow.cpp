// find GCD  Given 2 non negative integers A and B, find gcd(A, B)
//GCD of 2 integers A and B is defined as the greatest integer g such that g
// is a divisor of both A and B. Both A and B fit in a 32 bit signed integer.
// Note: DO NOT USE LIBRARY FUNCTIONS.

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int k = gcd(a, b);
    cout << k << endl;
}