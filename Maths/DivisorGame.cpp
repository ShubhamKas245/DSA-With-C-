// Scooby has 3 three integers A, B and C.
// Scooby calls a positive integer special if it is divisible by B and it
//  is divisible by C. You need to tell number of special integers less than or equal to A.
// Problem Constraints
// 1 <= A, B, C <= 109

#include <iostream>
#include <algorithm>
using namespace std;

int specialInteger(int a, int b, int c)
{
    int gCd = __gcd(b, c);
    int lcm = (b * c) / gCd;
    return a / lcm;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int k = specialInteger(a, b, c);
    cout << k << endl;
}