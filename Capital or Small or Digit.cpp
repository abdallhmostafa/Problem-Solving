

// ----------- ICPC Assiut University Community  ----------- //

// ----------- Sheet #1 (Data type - Conditions) ----------- //
// https://codeforces.com/group/MWSDmqGsZm/contest/219158    //

// -------------------- M.Capital or Small or Digit ----------- //
#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter value: ";
    cin >> x;
    if (int(x) >= 48 && int(x) <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (int(x) >= 65)
    {
        cout << "ALPHA\n";
        if (int(x) <= 93)
        {
            cout << "IS CAPITAL";
        }
        else
        {
            cout << "IS SMALL";
        }
    }

    return 0;
}
