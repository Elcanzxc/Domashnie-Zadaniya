#include <iostream>
#include "XYZ.h"

using namespace std;

int main() {
    XYZ a1;

    a1.initialize(12,13,14);
    a1.display();

    cout << a1.getX();
    return 0;
}