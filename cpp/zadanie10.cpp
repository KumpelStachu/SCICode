#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::fstream inFile;
	std::fstream outFile;

	inFile.open("dane.txt", std::ios::in);
	outFile.open("wynik.txt", std::ios::out);
	
	int date;

	while (!inFile.eof()) {
		date = 0;
		inFile >> date;
		if (!(date % 2))
			outFile << date << std::endl; 
	}

	inFile.close();
	outFile.close();

	return 0;
}