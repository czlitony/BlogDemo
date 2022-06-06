#include <iostream>
using namespace std;

int main()
{
    try {
        *((unsigned int*)0) = 0xDEAD;
    } catch (...) {
        cout << "exception caught!";
    }

    return 0;
}