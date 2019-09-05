// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	typedef struct {
		char title[255];
		char author_name[50];
		char ISBN[10];
		int pages;
		int year_published;
	}book;
	book my_book;
	book my_book_array[360];
	FILE*  p;
	int parse_file(FILE* p, book);
}


int parse_file(FILE* p, my_book_array)