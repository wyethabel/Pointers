//============================================================================
// Name        : Pointers.cpp
// Author      : Wyeth Abel
// Description :
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int integer1, integer2, integer3;

	cout << "Please provide three integers: " << endl;
	cin >> integer1;
	cin >> integer2;
	cin >> integer3;

	// Dynamic memory allocation
	int *pointer1 = new int;
	int *pointer2 = new int;
	int *pointer3 = new int;

	//Assignment to the dynamically created slots
	*pointer1 = integer1;
	*pointer2 = integer2;
	*pointer3 = integer3;

	cout << "Integer " << integer1 << " is located at " << pointer1 << endl;
	cout << "Integer " << integer2 << " is located at " << pointer2 << endl;
	cout << "Integer " << integer3 << " is located at " << pointer3 << endl;

	// Removal of dynamically created variables
	delete pointer1;
	delete pointer2;
	delete pointer3;

	return 0;
}
