#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    string str3 = "Hello";

    if (str1 == str3) {
        cout << "str1 and str3 are equal" << endl;
    } else {
        cout << "str1 and str3 are not equal" << endl;
    }

    if (str1 != str2) {
        cout << "str1 and str2 are not equal" << endl;
    } else {
        cout << "str1 and str2 are equal" << endl;
    }

    return 0;
}
