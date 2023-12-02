#include <iostream>
#include "Keeper.hpp"

using namespace std;

Keeper::Keeper() {
    cout << "Вызов конструктора класса Keeper" << endl;
    this->data = nullptr;
    this->size = 0;
}

Keeper::~Keeper() {
    cout << "Вызов деструктора класса Keeper" << endl;
    delete[] data;
}

int Keeper::getSize() {
    return this->size;
}

void Keeper::add() {
    Train* train = new Train;
    Train** new_trains = new Train * [size + 1];
    cin >> *train;
    
    for (int i = 0; i < size; i++) {
        new_trains[i] = data[i];
    }
    
    new_trains[size] = train;
    delete[] data;
    data = new_trains;
    size++;
    sort();
}

void Keeper::edit() {
    if (size == 0) {
        cerr << "Список поездов пуст!" << endl;
    }
    cout << "Выберите элемент списка для редактирования" << endl;
    for (int i = 0; i < size; i++) {
        cout << "[" << i+1 << "] " << data[i]->getNumber() << endl;
    }
    int num;
    cin >> num;
    if (num > size || num < 1) {
        cout << "Ошибка: неверный индекс." << endl;
        return;
    }
    cout << "Редактирование поезда №" << data[num-1]->getNumber() << endl;
    cin >> *data[num-1];
    sort();
}

void Keeper::del() {
    if (size == 0) {
        cerr << "Список поездов пуст!" << endl;
    }
    cout << "Выберите элемент списка для удаления" << endl;
    for (int i = 0; i < size; i++) {
        cout << "[" << i+1 << "] " << data[i]->getNumber() << endl;
    }
    int num;
    cin >> num;
    if (num > size || num < 1) {
        cout << "Ошибка: неверный индекс." << endl;
        return;
    }
    for (int i = num - 1; i < size; i++) {
        data[i] = data[i + 1];
    }
    size--;
}

void Keeper::sort() {
    if (size == 0 || size == 1) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        if (data[i]->getNumber() > data[i+1]->getNumber()) {
            Train* tmp = data[i];
            data[i] = data[i+1];
            data[i+1] = tmp;
            i = 0;
        }
        else {
            i++;
        }
    }
}

void Keeper::find() {
    if (size == 0) {
        cerr << "Список поездов пуст!" << endl;
    }
    int num;
    cout << "Введите номер поезда: ";
    cin >> num;
    if (num > size || num < 1) {
        cout << "Ошибка: неверный индекс." << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        if (data[i]->getNumber() == num) {
            data[i]->print();
            return;
        }
    }
    cout << "Поезд не найден." << endl;
}

ostream&  operator<<(ostream& out, Keeper& obj) {
    out << "-----Список-----" << endl;
    if (obj.size == 0) {
        out << "Ни одного элемента еще не было добавлено!" << endl;
    }
    else {
        for (int i = 0; i < obj.getSize(); i++) {
            out << *obj.data[i];
        }
    }
    return out;
}
