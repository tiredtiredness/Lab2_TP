#include <iostream>
#include "Train.hpp"

using namespace std;

Train::Train() {
    cout << "Вызов конструктора по умолчанию класса Train" << endl;
    destination = "Unknown";
    number = 0;
    departure = time(nullptr);
}

Train::Train(string destination, int number, time_t departure) {
    cout << "Вызов конструктора с параметрами класса Train" << endl;
    this->destination = destination;
    this->number = number;
    this->departure = departure;
}

Train::Train(Train& other) {
    other.number = this->number;
    other.destination = this->destination;
    other.departure = this->departure;
}

Train::~Train() {
    cout << "Вызов деструктора класса Train" << endl;
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

void Train::setDestination() {
    cout << "Введите место прибытия ";
    cin >> destination;
}

void Train::setNumber() {
    cout << "Введите номер поезда ";
    cin >> number;
}

void Train::setDeparture() {
    cout << "Введите время отправления ";
    cin >> departure;
}

void Train::print() {
    cout << "Поезд №" << number << endl
         << "-Пункт назначения: " << destination << endl
         << "-Время отправления: " << departure << endl;
}

istream& operator>>(istream& in, Train& train) {
    cout << "Номер поезда ";
    in >> train.number;
    cout << "Пункт назначения ";
    in >> train.destination;
    cout << "Время отправления ";
    in >> train.departure;
    return in;
}

ostream& operator<<(ostream& out, Train& train) {
    out << "Поезд №" << train.number << endl
    << "-Пункт назначения: " << train.destination << endl
    << "-Время отправления: " << train.departure << endl;
    return out;
}
