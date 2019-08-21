#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& ivec) {
	int i, j;
	int temp;

	int len = ivec.size();

	for (int i = 1; i < len; ++i) {
		for (int j = 0; j < len-1; ++j) {
			if (ivec[j+1] > ivec[j]) {
				temp = ivec[j];
				ivec[j] = ivec[j+1];
				ivec[j+1] = temp;
			}
		}
	}
}

int main() {

	vector<int> ivec;
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	ivec.push_back(4);
	ivec.push_back(5);
	cout << "Vector desordenado: \n";
	for (auto i: ivec) {
		cout << i << " ";
	}
	bubbleSort(ivec);
	cout << "\nVector ordenado: \n";
	for (auto i: ivec) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
