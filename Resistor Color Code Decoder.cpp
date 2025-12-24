#include<iostream>
#include<cmath>
#include<map>

using namespace std;

int main()
{
	map<string, int>digit = { {"black",0},{"brown",1},{"red",2},{"orange",3},{"yellow",4},{"green",5},{"blue",6},{"violet",
	7},{"grey",8},{"white",9} };

	map<string, double > multiplier = { {"black",1},{"brown",10},{"red",1e3},{"orange",1e4},{"yellow",1e4},{"green",1e5},
		{"blue",1e6},{"gold",0.1},{"silver",0.01} };

	map<string, double > tolerance = { {"brown",1},{"red",2},{"gold",5},{"silver",10} };

	string b1, b2, b3, b4;
	cout << "Enter the 4 color of resistor \n";
	cout << "1st color: ";
	cin >> b1;
	cout << "2nd color: ";
	cin >> b2;
	cout << "3rd color: ";
	cin >> b3;
	cout << "4th color: ";
	cin >> b4;

	double value = (digit[b1] * 10 + digit[b2]) * multiplier[b3];

	cout << "Resistance: " << value << " Ohms\n";
	cout << "Trolerance: " << tolerance[b4] << "%\n";

return 0;
}
