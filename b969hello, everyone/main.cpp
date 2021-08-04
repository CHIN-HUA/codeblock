#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string A, B;

    getline(cin, A);
    getline(cin, B);
    stringstream tool;

    tool << A;

    while(tool >> A)
    {
        cout << B <<", " << A << endl;
    }

    return 0;
}
