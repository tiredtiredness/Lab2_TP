#include <iostream>
#include "Train.hpp"
#include "Keeper.hpp"

using namespace std;

int main() {
    Keeper trains;
    int i;

    while (1) {
        cout << "-----Меню-----" << endl;
        cout << "[1] Добавить поезд" << endl;
        cout << "[2] Редактировать поезд" << endl;
        cout << "[3] Удалить поезд" << endl;
        cout << "[4] Поиск поезда по номеру" << endl;
        cout << "[5] Вывести список поездов" << endl;
        cout << "[0] Выход" << endl;
        cin >> i;
        switch (i) {
            case 1:
                trains.add();
                break;
            case 2:
                trains.edit();
                break;
            case 3:
                trains.del();
                break;
            case 4:
                trains.find();
                break;
            case 5:
                cout << trains;
                break;
            case 0:
                return 0;
        }
    }
    return 0;
}
