#include <assert.h>
#include <exception>
#include <iostream>

#include "TestScurt.h"
#include "LI.h"
#include "IteratorLI.h"

using std::cout;



void testAll() {
	LI lista = LI();
	assert(lista.vida());
	lista.adaugaSfarsit(1);
	assert(lista.dim() == 1);
	lista.adauga(0, 2);
	assert(lista.dim() == 1);
	IteratorLI it = lista.iterator();
	assert(it.valid());
	it.urmator();
	assert(it.element() == 0);
	it.prim();
	assert(it.element() == 2);
	assert(lista.cauta(2) == 0);
	assert(lista.modifica(0, 3) == 2);
	assert(lista.element(0) == 3);
	assert(lista.sterge(0) == 3);
	assert(lista.dim() == 0);
}

void testIndex() {
	LI lista = LI();
	assert(lista.vida());
	for (int i = 0; i <= 10; i++) {
		lista.adaugaSfarsit(i);
	}
	assert(lista.dim() == 11);
	assert(lista.ultimIndex(3) == 3);
	assert(lista.ultimIndex(0) == 0);
	assert(lista.ultimIndex(9) == 9);
	assert(lista.ultimIndex(12) == -1);
}