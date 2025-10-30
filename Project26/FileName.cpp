#include <iostream>
using namespace std;

bool isSortedIncreasing(int array[]);
bool isSortedDecreasing(int array[]);

int main(void) {

	int nums[] = { 1,2,3 };
	int nums2[] = { 3,2,1 };

	cout << isSortedIncreasing(nums) << endl;
	cout << isSortedDecreasing(nums) << endl;
	cout << isSortedDecreasing(nums2) << endl;

}

bool isSortedIncreasing(int array[]) {

	bool isSorted = true;

	for (int i = 1; i < (sizeof(array) / sizeof(array[0])); i++) {

		if (array[i] < array[i - 1]) {
			isSorted = false;
		}
	}

	return isSorted;
}

bool isSortedDecreasing(int array[]) {

	bool isSorted = true;

	for (int i = 1; i < (sizeof(array) / sizeof(array[0])); i++) {

		if (array[i] > array[i - 1]) {
			isSorted = false;
		}
	}

	return isSorted;
}
