#include <iostream>
#include <iomanip>

using namespace std;

void sort_arr(int n, int* arr1, int* arr2) {
	int temp1, temp2;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr2[j] < arr2[j + 1]) {
				temp1 = arr2[j];
				temp2 = arr1[j];
				arr2[j] = arr2[j + 1];
				arr1[j] = arr1[j + 1];
				arr2[j + 1] = temp1;
				arr1[j + 1] = temp2;
			}
		}
	}
}

void print_arr(int n, int* arr1, int* arr2) {
	for (int i = 0; i < n; i++)
		cout << arr1[i] << "/" << arr2[i] << setw(6);
}

int gcd(int a, int b) {
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	while (a % b != 0) {
		a = a % b;
		int t = a;
		a = b;
		b = t;
	}
	return b;
}

int gcd_n(int n, int* values) {
	if (n == 1)
		return values[0];
	int gcd_value = gcd(values[0], values[1]);
	for (int i = 2; i < n; ++i) {
		gcd_value = gcd(gcd_value, values[i]);
	}
	return gcd_value;
}


