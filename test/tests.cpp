//  Copyright Baklanov 2021
#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include "train.h"

TEST(Train, TEST1) {
    int i = 0;
    Train* newTrain = new Train();
    Cage* newCage = new Cage();
    newCage->on();
    newTrain->addCage(newCage);
    EXPECT_EQ(1, newCage->get());
}

TEST(Train, TEST2) {
    int i = 0;
    int cageMount = 0;
    Train* newTrain = new Train();
    for (i = 0; i < cageMount; ++i) {
        Cage* newCage = new Cage();
        if (std::rand() % 2) {
            newCage->on();
        }
        newTrain->addCage(newCage);
    }
    EXPECT_EQ(0, newTrain->countLength());
}

TEST(Train, TEST3) {
    int i = 0;
    int cageMount = 1;
    Train* newTrain = new Train();
    for (i = 0; i < cageMount; ++i) {
        Cage* newCage = new Cage();
        if (std::rand() % 2) {
            newCage->on();
        }
        newTrain->addCage(newCage);
    }
    EXPECT_EQ(1, newTrain->countLength());
}

TEST(Train, TEST4) {
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
    EXPECT_EQ(778, newTrain->countLength());
}
