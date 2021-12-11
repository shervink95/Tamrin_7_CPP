#include <iostream>

using namespace std;

void fib(int a, int x, int y, int k) {
	k = x + y;
	y = x;
	x = k;
	if (k > 1000) {
		return;
	}
	cout << k << endl;
	fib(a + 1, x, y, k);

}

int main()
{
	cout << "1" << endl << "1" << endl;
	fib(2, 1, 1, 1);
	return 0;
}