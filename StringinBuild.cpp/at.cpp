// CPP code to extract characters from a given string

#include <iostream>
using namespace std;

// Function to demonstrate std::string::at
void result(string str)
{
	char ch;

	// Calculating the length of string
	// int l = str.length();


    ch = str.at(3);
    cout<<ch;

    
	// for (int i = 0; i < l; i++) {
	// 	ch = str.at(3);
	// 	cout << ch << " ";
	// }
}

// Driver code
int main()
{
	string str("Rajendra");
	result(str);
	return 0;
}
