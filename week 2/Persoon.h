#pragma once

#include <string>
#include <iostream>

using namespace std;

class Persoon
{
public:
	string name;
	int age;


	void setAge(int _age) {
		age = _age;
	}

	void setName(string _name) {
		name = _name;
	}

	void getAge() {
		return age;
	}

	void getName() {
		return name;
	}



}
