#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::fstream inFile;
	std::fstream outFile;

	inFile.open("dane.txt", std::ios::in);
	outFile.open("wynik.txt", std::ios::out);
	
	std::string date;
	int ile = 0;

	while (!inFile.eof()) {
		date = "";
		inFile >> date;
		if (date == "May")
			ile++;
			
		outFile << ile << std::endl; 
	}

	inFile.close();
	outFile.close();

	return 0;
}