#pragma once

#include <string>
#include <ctime>

using namespace std;

class Train {
private:
    string destination;
    int number;
    time_t departure;
public:
    Train();
    Train(string, int, time_t);
    Train(Train&);
    ~Train();
    string getDestination();
    int getNumber();
    time_t getDeparture();
    void setDestination();
    void setNumber();
    void setDeparture();
    void print();
    friend istream& operator>>(istream& in, Train& train);
    friend ostream& operator<<(ostream& out, Train& train);
};
