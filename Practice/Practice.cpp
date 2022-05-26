#include <iostream>
#include <iomanip>

using namespace std;

void sort_arr(int, int*, int*);
void print_arr(int, int*, int*);
int gcd_n(int, int*);


int main()
{
	int *nums, *denums;
	int n;
	cout << "Enter the number of numbers ->";
	cin >> n;
	nums = new int[n];
	denums = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Enter numerator ->";
		cin >> nums[i];
		cout << "Enter denumerator ->";
		cin >> denums[i];
	}
	cout << "Result: " << endl;
	print_arr(n, nums, denums);

	sort_arr(n, nums, denums);

	cout << endl <<"Sorted: " << endl;
	print_arr(n, nums, denums);

	cout << endl << "GCD : " << gcd_n(n, denums);

	return 0;
}
