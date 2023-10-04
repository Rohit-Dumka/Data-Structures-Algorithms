#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char S, char D,
				char A)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, S, A, D);
	cout << "Move disk " << n << " from rod " << S
		<< " to rod " << D << endl;
	towerOfHanoi(n - 1,A, D, S);
}

// Driver code
int main()
{
	int N = 3;

	// X, Y and Z are names of rods
	towerOfHanoi(N, 'X', 'Y', 'Z');
	return 0;
}
