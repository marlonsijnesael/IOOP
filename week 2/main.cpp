#pragma once

#include "student.h"
#include "docent.h"

int main(void) {
	Student student0;
	Docent docent0;

	//student
	student0.setAge(18);
	student0.setName("Jan");

	cout << "Student info: ";
	cout << student0.getAge;
	cout << student0.getName;

	//docent
	docent0.setAge(35);
	docent0.setName("Tom");

	cout << "Docent info: ";
	cout << docent0.getAge;
	cout << docent0.getName;

}