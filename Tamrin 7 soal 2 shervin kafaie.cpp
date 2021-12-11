#include <iostream>

using namespace std;

int fib(int n, int a, int x, int y, int k) {
	if ((a == 0) || (a == 1) || (n == 1) || (n == 0)) {
		return 1;
	}
	else {
		k = x + y;
		y = x;
		x = k;
		if (n == a) {
			return k;
		}
		fib(n, a + 1, x, y, k);
	}
}

int main()
{
	int x;
	cout << "jomle fibonatchi mored nazar ra vared konid:\n";
	cin >> x;
	x = fib(x, 2, 1, 1, 1);
	cout << x << endl;
	return 0;
}