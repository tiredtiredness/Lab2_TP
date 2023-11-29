#include <iostream>
#include "Train.hpp"

using namespace std;

Train::Train() {
    cout << "Вызов конструктора по умолчанию класса Train";
    destination = "Unknown";
    number = 0;
    departure = time(nullptr);
}
Train::Train(string destination, int number, time_t departure) {
    cout << "Вызов конструктора с параметрами класса Train";
    this->destination = destination;
    this->number = number;
    this->departure = departure;
}

Train::~Train() {
    cout << "Вызов деструктора класса Train";
}

string Train::getDestination() {
    return destination;
}

int Train::getNumber() {
    return number;
}

time_t Train::getDeparture() {
    return departure;
}

