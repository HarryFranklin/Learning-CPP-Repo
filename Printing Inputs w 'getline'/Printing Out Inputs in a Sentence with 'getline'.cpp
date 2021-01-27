#include <iostream>
#include <string>

using namespace std;

int main()
{
	string adjective; 
	cout << "enter an adjective: ";
	getline (cin, adjective);
	cout << "The sky is " << adjective << "." << endl;
	return 0;
}
