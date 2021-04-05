// Copyright Baklanov 2021
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Cage {
 private:
    bool light;

 public:
    Cage* next;
    Cage* prev;
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};

class Train {
 private:
    Cage* first;
    Cage* last;

 public:
    Train():
        first(nullptr), last(nullptr) {}
    void addCage(Cage* cage);
    void printCagesCond();
    int countLength();
};
#endif  // INCLUDE_TRAIN_H_
