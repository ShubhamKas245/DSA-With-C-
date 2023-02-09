// Tower of Hanoi
// Tower of Hanoi is a mathematical puzzle where we have three rods(A, B, and C) and N disks.Initially
// , all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and
//  they are on rod A.The objective of the puzzle is to move the entire stack to another rod(here considered C), obeying the following simple rules :
// Simple rules  => we can move only 1 ring at a time
// 2  => larger ring shouldn't placed over smaller ring
#include <iostream>
using namespace std;

void toh(int n, char s, char d, char t)
{
	if (n == 0)
	{
		return;
	}
	toh(n - 1, s, t, d);
	cout << n << ":  " << s << " to " << d << endl;
	toh(n - 1, t, s, d);
}

int main()
{
	int n;
	cin >> n;
	toh(n, 'a', 'b', 'c');

	return 0;
}