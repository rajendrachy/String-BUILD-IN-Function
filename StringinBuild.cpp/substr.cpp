#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";
    string sub = str.substr(6, 10); //6 is the starting index and   5 is the length of the substring to extract.
    cout << sub << endl; // Output: World

    return 0;
}
