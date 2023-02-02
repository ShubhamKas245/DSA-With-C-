
// You are given 2 numbers P and Q.
// An operation on these 2 numbers is defined as follows:
// Take the smaller number of the 2 numbers and subtract it from the bigger number. Keep performing this operation till either of the following criterion is met:
// Both numbers become equal.
// Either of the number becomes 0.
// Find the sum of the final values of P and Q.
// Constraints:
//  0 <= P,Q <= 1e9
// Input:
// Two integers P and Q
// Output:
// Sum of the final values of P and Q

#include <iostream>
using namespace std;

int twoNumberSum(int p, int q)
{
    while (p != 0 && q != 0 && p != q)
    {
        if (p > q)
        {
            p -= q;
        }
        else
        {
            q -= p;
        }
    }
    return p + q;
}

int main()
{

    int p, q;
    cin >> p >> q;

    int repeatedSub = twoNumberSum(p, q);
    cout << repeatedSub << endl;
}