#include <iostream>
using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);
bool hasAdjecentDuplicates(int array[], int size);
bool hasDuplicates(int array[], int size);

int main(void) {

	int nums[] = { 1,2,2,4,5,6};
	
	cout << hasDuplicates(nums, 6) << endl;

}

bool isSortedIncreasing(int array[], int size) {

	bool isSorted = true;

	for (int i = 1; i < size; i++) {

		if (array[i] < array[i - 1]) {
			isSorted = false;
		}
	}

	return isSorted;
}

bool isSortedDecreasing(int array[], int size) {

	bool isSorted = true;

	for (int i = 1; i < size; i++) {

		if (array[i] > array[i - 1]) {
			isSorted = false;
		}
	}

	return isSorted;
}

bool hasAdjecentDuplicates(int array[], int size) {

	bool hasDupes = false;

	for (int i = 1; i < size; i++) {

		if (array[i] == array[i - 1]) {
			hasDupes = true;
		}
	}
	return hasDupes;
}

bool hasDuplicates(int array[], int size) {

	bool hasDupes = false;
	
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {

			if (i != j) { //ensures it doesn't count itself as a duplicate
				if (array[i] == array[j]) {
					hasDupes = true;
				}
			}
		}
	}

	return hasDupes;
}
