#include <iostream>
#include <fstream>
#include "Train.hpp"
#include "Keeper.hpp"
#include "showSentencesWithWordCountFromFile.hpp"

using namespace std;

void main1();
void main2();

#define USE_MAIN1 true

int main() {
    if (USE_MAIN1)
        main1();
    else
        main2();
    return 0;
}


void main1() {
    
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
        if (i > 5 || i < 0) {
            cout << "Ошибка: неверный выбор!" << endl;
        }
        else {
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
                    return;
            }
        }
    }
}

void main2() {
    int n;
    while (1) {
        cout << "Количество слов: ";
        cin >> n;
        showSentencesWithWordCountFromFile("/Users/tiredtiredness/Documents/xcode projects/Lab2_TP/Lab2_TP/file.txt", n);
    }
}
