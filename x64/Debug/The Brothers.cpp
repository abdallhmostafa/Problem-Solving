

// ----------- ICPC Assiut University Community  ----------- //

// ----------- Sheet #1 (Data type - Conditions) ----------- //
// https://codeforces.com/group/MWSDmqGsZm/contest/219158    //

// --------------------	L. The Brothers -------------------- //
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, f1, s2, f2;
    cout << "Enter First Name: ";
    cin >> f1;
    cout << "Enter Second Name: ";
    cin >> s1;
    cout << "Enter First Name: ";
    cin >> f2;
    cout << "Enter Second Name: ";
    cin >> s2;
    if (s1.compare(s2) == 0)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }
    return 0;
}
