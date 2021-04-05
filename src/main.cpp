// Copyright Baklanov 2021
#include <iostream>
#include "train.h"

int main() {
    int i = 0;
    int cageMount = 778;
    Train* newTrain = new Train();
    for (i = 0; i < cageMount; ++i) {
        Cage* newCage = new Cage();
        if (std::rand() % 2) {
            newCage->on();
        }
        newTrain->addCage(newCage);
    }
    std::cout << newTrain->countLength() << std::endl;
}
