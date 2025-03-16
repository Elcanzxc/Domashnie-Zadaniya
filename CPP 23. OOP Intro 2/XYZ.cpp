#include "XYZ.h"


void XYZ::initialize(const int X, const int Y, const int Z) {
    setX(X);
    setY(Y);
    setZ(Z);

}

void XYZ::display() {
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    cout << "Z: " << z << endl;

}


int XYZ::getX() { return x; }
int XYZ::getY() { return y; }
int XYZ::getZ() { return z; }



void XYZ::setX(const int X) { x = X; }
void XYZ::setY(const int Y) { y = Y; }
void XYZ::setZ(const int Z) { z = Z; }