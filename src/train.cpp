// Copyright Baklanov 2021
#include "train.h"
#include <iostream>

void Train::addCage(Cage* cage) {
	if (first) {
		last->next = cage;
		cage->next = first;
		cage->prev = last;
		first->prev = cage;
		last = cage;
	} else {
		first = cage;
		first->next = first;
		first->prev = first;
		last = cage;
		last->prev = first;
		last->next = first;
	}
}

void Train::printCagesCond() {
	Cage* buf = first;
	std::cout << buf->get() << std::endl;
	buf = buf->next;
	while (buf != first) {
		std::cout << buf->get() << std::endl;
		buf = buf->next;
	}
}

int Train::countLength() {
	if (!first) return 0;
	int cageCounter = 0;
	bool checkLast = last->get();
	Cage* currentCage = first;
	while (true) {
		++cageCounter;
		if (currentCage->get()) {
			currentCage->off();
		} else {
			currentCage->on();
		}
		if (last->get() != checkLast) return cageCounter;
		currentCage = currentCage->next;
	}
}
