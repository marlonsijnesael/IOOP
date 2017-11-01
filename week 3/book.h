#pragma once
#include <string>
using namespace std;

class Book {
public:
	Book();
	Book(std::string type);
	string name;
	bool isAvailable;

}