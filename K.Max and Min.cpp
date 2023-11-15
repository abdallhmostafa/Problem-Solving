

// ----------- ICPC Assiut University Community  ----------- //


// ----------- Sheet #1 (Data type - Conditions) ----------- //
// https://codeforces.com/group/MWSDmqGsZm/contest/219158    //

// --------------------	K. Max and Min -------------------- //

#include <iostream>
using namespace std;
int main()
{



		
	signed long long x, y, z;


	cin >> x >> y >> z;



	if (x <= y && x <= z) {
		cout << x << " ";
		if (y > z || y == z) {
			cout << y << "\n";
		}
		else
		{
			cout << z << "\n";

		}

	}

	else if (y <= x && y <= z) {
		cout << y << " ";
		if (x >= z) {
			cout << x << "\n";
		}
		else
		{
			cout << z << "\n";

		}

	}

	else if (z <= y && z <= x) {
		cout << z << " ";
		if (y >= x) {
			cout << y << "\n";
		}
		else
		{
			cout << x << "\n";

		}

	}

	return 0;
} 
