// String Reversal
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int maxLength = 200;
	char* str = new char[maxLength];
	cout << "Enter a string: ";
	cin.getline(str, maxLength);	

    int len = 0;

    while (str[len] != '\0') {
        ++len;
    }

    std::reverse(str, str + len);
    

    cout << "Reversed string: "<<str<<endl;
    delete[] str;
	return 0;
}