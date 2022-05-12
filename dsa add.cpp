/*//daca elementul e pe prima pozitie si are elemente dupa el*/
	if (!vida() && i == 0) {
		check_if_resize();
		TElem aux = this->elems[i];
		this->elems[i] = e;
		this->head = this->elems[i];
		this->urm[i] = aux;
		this->elems[i + 1] = this->urm[i];
		this->primLiber = this->urm[e];
		this->size++;
	}
	//daca elementul e pe prima pozitie
	else if (vida() && i == 0) {
		check_if_resize();
		this->elems[i] = e;
		this->head = this->elems[i];
		this->urm[i] = -1;
		this->primLiber = this->urm[i];
		this->size++;
	}
	//daca elementul e pe o pozitie aleatoare (nu ultima)
	else if (!vida() && (i > 0 && i < this->size)) {
		check_if_resize();
		for (int i = 0; i <= this->size; i++) {
			this->elems[i] = this->elems[i + 1]; //facem loc
		}
		TElem aux = this->elems[i];
		this->elems[i] = e;
		this->urm[this->elems[i]] = aux;
		this->size++;
		if (i == this->size) adaugaSfarsit(e);
	}


/**/check_if_resize();
	this->elems[this->size] = e;
	this->urm[this->elems[this->size]] = this->elems[e];
	this->primLiber = this->urm[this->elems[this->size]];
	//this->primLiber = -1;
	this->head = this->elems[this->size];
	this->size++;


//DELETE
for (int cnt = 0; cnt < this->dim(); cnt++) {
			if (cnt == i) {
				this->elems[cnt] = this->elems[cnt + 1];
				this->size--;
			}
		}


assert(!it.valid());
	try {
		it.element();
		assert(false);
	}
	catch (exception&) {
		assert(true);
	}



if (!vida()) {
		IteratorLI it = this->iterator();
		it.prim();
		while (it.valid()) {
			TElem current = it.element();
			if (current == e) {
				return it.index;
			}
			it.urmator();
		}
	}


/**/if (i == this->head) {
		this->head = this->urm[i];
	}
	else {
		auto current = this->head;
		while (this->urm[current] != i) {
			current = this->urm[current];
		}
		this->urm[current] = this->urm[i];
	}
	dealoca(i);



else if (!vida()) {
		IteratorLI it = this->iterator();
		it.prim();
		for (int i = 0; i < this->dim(); i++) {
			TElem current = it.element();
			if (current == i) {
				TElem old_val = elems[i];
				elems[i] = e;
				return old_val;
			}
			it.urmator();
		}
	}

	/**/for (int i = 99; i > -1; i--) {
		assert(it.element() == i);
		it.urmator();
	}
