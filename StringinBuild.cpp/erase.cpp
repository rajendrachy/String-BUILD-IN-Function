#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str = "Hello world";
    str.erase(1,6);
    cout << str << endl;

    return 0;
}
