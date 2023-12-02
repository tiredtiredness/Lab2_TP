#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getSentencesWithWordCountFromFile(string filename, int wordCount) {
    ifstream file(filename);
    vector<string> sentences;
    if (!file.is_open()) {
        cerr << "Невозможно открыть файл " << filename << endl;
        return sentences;
    }
    
    
    return vector<string>();
}
