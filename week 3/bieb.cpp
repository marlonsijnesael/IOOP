#include "bieb.h"

Bibliotheek::Bibliotheek() {}

void Bibliotheek::addBook(Book _book) {
	allBooks.push_back(_book)
}

void Bibliotheek::lendBook(Book _book) {
	if (_book.isAvailable) {
		_book.isAvailable = false;
	}
}

