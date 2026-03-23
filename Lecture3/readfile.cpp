#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream input;
    input.open("carroll.txt");

    if(input.fail()) {
        cout << "womp womp womp" << endl;
    }
    
    // string line;
    // int lines = 0;
    // while (getline(input, line)) {
    //     ++lines;
    //     cout << "here is " << lines << ": " << line << endl;
    // }
   
    // cout << "Total lines: " << lines << endl;


    string token;
    vector<string> allWords;
    int words = 0;
    while(input >> token) {
        cout << "here is " << words + 1 << ": " << token << endl;
        ++words;
        allWords.push_back(token);
    }

    cout << "Total words: " << words << endl;

    input.close();

    return 0;
}