#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::fstream inFile;
	std::fstream outFile;

	inFile.open("dane.txt", std::ios::in);
	outFile.open("wynik.txt", std::ios::out);
	
	std::string date;

	while (!inFile.eof()) {
		date = "";
		inFile >> date;
		if (date == "September")
			outFile << date << std::endl; 
	}

	inFile.close();
	outFile.close();

	return 0;
}