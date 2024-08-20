#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";

    int pos = str.find("World");

    if (pos != -1)
        cout << "'World' found at position: " << pos << endl;
    else
        cout << "'World' not found" << endl;

    return 0;
}
