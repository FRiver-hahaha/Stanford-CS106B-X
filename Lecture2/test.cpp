#include <iostream>
#include <string>
using namespace std;

void  mystery(string a, string& b) {
    a.erase(0, 1);
    b += a[0];
    b.insert(3, "FOO");
}

int main() {
    string a = "marty";
    string b = "stepp";
    mystery(a, b);
    cout << a << " " << b << endl;
    return 0;
}