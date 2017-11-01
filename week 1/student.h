#pragma once
#include <string>
using namespace std;

class Student {
	private:

		string name;
		string opleiding;
	
		int studiePunten;
		int studentNumber;

	public:
		virtual void setStudentpoints(int amount);


};