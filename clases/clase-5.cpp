#include <iostream>
using namespace std;

struct Punto {
    double x, y;
};

struct Circulo {
    Punto centro;
    double radio;
};

int main() {

    Circulo c;

    c.centro.x = 10;
    c.centro.y = 20;
    c.radio = 7;

    cout << "Centro: (" 
        << c.centro.x << ", "
        << c.centro.y << ")" << endl;

    cout << "Radio: " << c.radio << endl;

    return 0;
}
