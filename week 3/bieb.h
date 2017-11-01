#pragma once
#include <string>
#include <vector>
#include "book.h"



class Bibliotheek {
public :
	Bibliotheek();

	void addBook(Book _book);
	void lendBook(Book _book);

	std::vector<Book> allBooks;

}