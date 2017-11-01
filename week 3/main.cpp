#include"bieb.h"
#include "book.h"

int main(void) {
	Bibliotheek _bieb = Bibliotheek;
	Book* _book = new Book("hairy porter");
	
	_bieb.addBook(_book);
	_bieb.lendBook(_book);



	



}