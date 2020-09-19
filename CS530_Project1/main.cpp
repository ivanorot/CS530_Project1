#include <iostream>
#include <string.h>
using namespace std;



int main(char args[]) {
	string segmentate(string);
	char intToChar(int);
	string input;
	string output;

	cout << "Metele ahi un numero irga" << endl;
	cin >> input;


	output = segmentate(input);

	cout << output;


	cin >> input;
	return 0;
}

string segmentate(string temp) {
	string convert(char);
	string ret;
	for (int i = 0; i < temp.length(); i++) {
		ret += convert(temp[i]);
	}

	return ret;
}

string convert(char algo) {
	char intToChar(int);
	int x = algo;
	string t;
	int hex_2 = x / 16;
	int hex_1 = x % 16;

	t += intToChar(hex_2);
	t += intToChar(hex_1);
	
	return t;
}

char intToChar(int num) {
	char tempChar;
	if (num < 10) {
		tempChar = (num + 48);
	}
	else{
		tempChar = ((num - 10) + 97);
	}
	return tempChar;
}


