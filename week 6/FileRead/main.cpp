#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include "main.h"

#define FILE "..\\hallo.txt"

void Functions::reverse(std::string _text) {

	std::reverse(_text.begin(), _text.end());
	{
		std::ofstream file("..\\reversed.txt");
		file << _text;
	}
}


}
int main() {
	const char* const file_name = FILE;

	std::string text;
	{
		std::ifstream file(FILE); 
		char chr;
		while (file.get(c)) 
			text += c;
	}
	
	Functions(text);

	std::ifstream file1("..\\oneven.txt");
	std::ifstream file2("..\\even.txt");
	std::ofstream combined_file("..\\alle.txt");
	std::string line;
	
	{
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	std::getline(file1, line);
	combined_file << line << '\n';
	std::getline(file2, line);
	combined_file << line << '\n';
	}

	

	char chr;
	std::cin >> chr;
	return 0;
}