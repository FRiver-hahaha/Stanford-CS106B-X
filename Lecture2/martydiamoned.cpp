#include <iostream>
#include <string>
using namespace std;

void nameDiamond(string s) {
    for(int i = 0; i < s.length(); ++i) {
        cout << s.substr(0, i + 1) << endl;
    }

    for(int i = 0; i < s.length(); ++i) {
        for(int j = 0; j < i + 1; j++) {
            cout << " ";
        }

        cout << s.substr(i + 1) << endl;
    }
}

int main() {
    nameDiamond("MARTY");

    return 0;
}