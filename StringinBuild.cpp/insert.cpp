#include<iostream>
#include<string>
using namespace std;

int main () {
    string str = "Hello";
    str.insert(4, "World");
    cout << str << endl;
    return 0;
}

