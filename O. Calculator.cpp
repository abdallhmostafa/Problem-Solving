
// ----------- ICPC Assiut University Community  ----------- //

// ----------- Sheet #1 (Data type - Conditions) ----------- //
// https://codeforces.com/group/MWSDmqGsZm/contest/219158    //

// -------------------- O. Calculator ----------- //

#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    char s;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter S: ";
    cin >> s;
    cout << "Enter B: ";
    cin >> b;
    if (s == '+')
    {
        cout << (a + b);
    }
    else if (s == '-')
    {
        cout << (a - b);
    }
    else if (s == '*')
    {
        cout << (a * b);
    }
    else if (s == '/')
    {
        cout << int((a / b));
    }

    return 0;
}
