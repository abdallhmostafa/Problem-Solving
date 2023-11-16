
// ----------- ICPC Assiut University Community  ----------- //

// ----------- Sheet #1 (Data type - Conditions) ----------- //
// https://codeforces.com/group/MWSDmqGsZm/contest/219158    //

// -------------------- N. Char ----------- //

#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter value: ";
    cin >> x;
    if (int(x) >= 65 && int(x) <= 96)
    {
        cout << char((int(x) + 32));
    }
    else if (int(x) >= 97)
    {
        cout << char((int(x) - 32));
    }

    return 0;
}
