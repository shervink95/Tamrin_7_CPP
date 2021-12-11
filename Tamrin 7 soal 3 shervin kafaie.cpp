#include <iostream>

using namespace std;

void jostojo(int a[], int max, int min, int x) {
	if (min == max) {
		if (a[max] != x) {
			cout << "not found!\n";
		}
		else {
			cout << "found!\n";
		}
		return;
	}
	else {
		int mid = (max + min) / 2;
		if (x == a[mid]) {
			cout << "found!" << endl;
			return;
		}
		else if (x > a[mid]) {
			min = mid + 1;
			jostojo(a, max, min, x);
		}
		else {
			max = mid - 1;
			jostojo(a, max, min, x);
		}
	}
}

int main()
{
	int a[10], x;
	cout << "lotfan list ra be sorat moratab vared konid:\n";
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cout << "add mored nazar ra vared konid:\n";
	cin >> x;
	jostojo(a, 9, 0, x);
	return 0;
}