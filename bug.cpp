// bug.cpp : Sort the entered numbers.
//

#include <iostream>
using std::cout;
using std::cin;


int * sort(int * a, int n) {
	int b[1024];
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}

	for (int i = 1; i < n; i++) {
		int k = b[i];
		int j = i - 1;
		while (j >= 0 && k < b[j]) {
			b[j + 1] = b[j];
			j--;
		}
		b[j + 1] = k;
	}
	return b;
}

int main() {
	int n = 0;
	cin >> n;

	int * a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	a = sort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';

	delete[] a;

	return 1;
}
