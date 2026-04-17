//tipos de datos (cómo se guardan en memoria) y operadores (qué podés hacer con ellos)
/* 1. Booleanos (bool)
Representan valores lógicos: verdadero o falso.
Palabras clave: bool, true, false.
Operadores lógicos: not (!), and (&&), or (||). 

2. Naturales (unsigned int)Son los números para contar ($0, 1, 2, 3...$). 
No tienen signo negativo.Palabra clave: unsigned int.Rango: Empiezan siempre en $0$

3. Enteros (int)Incluyen a los naturales, sus negativos y el cero ($...-2, -1, 0, 1, 2...$).
Palabra clave: int.Operadores: +, -, *, / (división entera), % (resto)

4. Reales (double o float)Son los números con coma o decimales ($3.14$, $-0.5$, $2.0$).
Palabra clave: double (es el estándar por tener más precisión que float).Detalle técnico: Los reales en computación son una aproximación
*/


#include <cassert>

    int main (){
        assert(not true == false);
       /*  assert(2*4 == 10-3); */
        bool r = (5 == 5);
        assert( true or true == not false);
        assert(10-11 == -1);
        assert(3.14+ 6.86 == 10);
    }