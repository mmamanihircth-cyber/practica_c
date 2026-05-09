/*  Procesos de Desarrollo de Funciones 
    ESPECIFICACION(¿Que va hacer la funcion?)
    PRUEBAS(Como validar la funcion)
    IMPLEMENTACION(Hacerla realidad)
*/

#include <iostream>
#include <cassert>

/* double f(double);
int main(){
    std:: cout<<f(3);
    assert(2*3 +1 == 7);
    assert(7==f(3));
}
double f (double x){
    return 2*x + 1;
} */

double Celsius(double);
bool AreNear (double, double, double=0.001);

int main(){
    assert(AreNear(17.7778, Celsius(64)));
    assert(AreNear(17.7777777778, Celsius(64), 0.0000000001));
}
double Celsius(double f){
    return 5.0/9.0 *(f-32);
}
bool AreNear(double a, double b, double delta){
    return (a-delta) <= b and b <= (a+delta);
}