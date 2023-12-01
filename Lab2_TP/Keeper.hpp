#pragma once

#include <iostream>
#include "Train.hpp"

using namespace std;

class Keeper {
private:
    Train** data;
    int size;
public:
    Keeper();
    ~Keeper();
    int getSize();
    void add();
    void edit();
    void del();
    void find();
    void sort();
    friend ostream& operator<<(ostream& out, Keeper& obj);
};
