#include <iostream>
#include <string>
using namespace std;

string printSomething();

int main() {

	cout << "Hello World!\n";
	string text = printSomething();
	cin.get();
	
	return 0;
}

string printSomething() {
	return "Hello Again!";
}