#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Rajendra chaudhary";

    string substr1 = str.substr(7);
    cout << "Substring from position 7: " << substr1 << endl;

    string substr2 = str.substr(0, 5);
    cout << "Substring from position 0 with length 5: " << substr2 << endl;

    return 0;
}
