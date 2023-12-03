#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void showSentencesWithWordCountFromFile(string filepath, int wordCount) {
    ifstream file(filepath);
    if (!file.is_open()) {
        cerr << "Невозможно открыть файл " << filepath << endl;
    }
    string sentence;
    while (getline(file, sentence)) {
        istringstream iss(sentence);
        string word;
        int count = 0;

        while (iss >> word) {
            ++count;
        }

        // Проверяем, соответствует ли количество слов заданному
        if (count == wordCount) {
            cout << sentence << endl;
        }
    }
}
