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
    string word;
    int currWordCount = 0;
    char c;
    while (file.get(c)) {

    }
}
