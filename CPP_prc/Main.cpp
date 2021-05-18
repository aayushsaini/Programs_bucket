#include <iostream>
#include "Cube.h"

using std::cout;
using std::endl;

int main() {
	Cube c;
	
	c.setLength(3.2);
	double volume = c.getVolume();
	cout << "\nVolume: " << volume << endl;

	return 0;
}
