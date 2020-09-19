#include <iostream>
using namespace std;

class AddressReferences {
private:
	int *address_array;
	int array_length;

	void expandArray() {
		int *tempArr = new int[array_length+1];
			
		for (int i = 0; i < array_length; i++) {
			tempArr[i] = address_array[i];
		}
		
		address_array = tempArr;
	}

public:
	AddressReferences() {
		array_length = 0;
	}

	void addAddress(int newAddress) {
		expandArray();
		array_length++;
		address_array[array_length - 1] = newAddress;
	}

	int length() {
		return array_length;
	}

	int *get() {
		return  address_array;
	}

	int get(int i) {
		return address_array[i];
	}
	
};