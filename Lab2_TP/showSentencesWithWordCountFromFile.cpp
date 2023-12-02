#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void showSentencesWithWordCountFromFile(string filepath, int wordCount) {
    ifstream file(filepath);
    if (!file.is_open()) {
        cerr << "Невозможно открыть файл " << filepath << endl;
    }
    string sentence;
    int count = 0;
    bool inWord = false;
    while (getline(file, sentence)) {
        count = 0;
        for (char c : sentence) {
            if (std::isalnum(c)) { // если текущ символ буква/цифра, то началось слово
                if (!inWord) {
                    count++;
                    inWord = true;
                }
            } 
            else {
                inWord = false;
            }
        }
        if (count == wordCount) {
            cout << sentence << endl;
        }
    }
}
