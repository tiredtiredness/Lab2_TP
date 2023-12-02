#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string s;
    ifstream fin("file.txt");
    s = fin.get();
    cout << s;
}
