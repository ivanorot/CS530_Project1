#include <iostream>
#include <string.h>
#include "AddressReferences.h"

using namespace std;

class HexDecoder {
private:
	AddressReferences addresses;

public:
	
	HexDecoder() {
	}

	string stringLineToHexLine(string line) {
		string temp_line;

		return temp_line;
	}

	
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

	string charToByte(char algo) {
		char intToChar(int);
		int x = algo;
		string t;
		int hex_2 = x / 16;
		int hex_1 = x % 16;

		t += intToChar(hex_2);
		t += intToChar(hex_1);

		return t;
	}

	string stringToHex(string temp) {
		string convert(char);
		string ret;
		for (int i = 0; i < temp.length(); i++) {
			ret += convert(temp[i]);
		}

		return ret;
	}






};