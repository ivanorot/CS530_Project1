#pragma once
#include <iostream>
#include <string.h>
#include "AddressReferences.h"

using namespace std;

class BinaryDecoder {
private:
	AddressReferences addresses;

public:
	BinaryDecoder() {}

	
	string charToBit(char inputChar) {
		char intToChar(int);
		int tempChar;
		int x = inputChar;
		int bit[4];
		string t;

		for (int i = 0; i < 4; i++) { 
			tempChar = (1 & x << (3 - i));
			bit[i] = tempChar;
			
		}
		for (int f = 0; f < 4; f++) {
			t += intToChar(bit[f]);
		}

		return t;
	}

	//For Bits
	char intToChar(int num) {
		char tempChar;
		if (num < 10) {
			tempChar = (num + 48);
		}
		else {
			tempChar = ((num - 10) + 97);
		}
		return tempChar;
	}

	string stringToHex(string temp) {
		string charToBit(char);
		string ret;
		for (int i = 0; i < temp.length(); i++) {
			ret += charToBit(temp[i]);
		}

		return ret;
	}


};