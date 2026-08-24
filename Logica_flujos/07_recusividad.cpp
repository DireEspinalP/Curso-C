/*
---------------FUNCION RECURSIVA---------------
La recursividad es una técnica de programación
en la que una función se llama a sí misma para 
resolver un problema. En lugar de utilizar bucles,
las funciones recursivas descomponen problemas 
complejos en subproblemas más pequeños y similares 
hasta que alcanzan un caso sencillo que puede 
resolverse directamente.

Cada función recursiva debe tener dos componentes 
esenciales. El caso base es una condición que detiene 
la recursión; sin él, la función se llamaría a sí misma 
indefinidamente. El paso recursivo es donde la función 
se llama a sí misma con parámetros modificados, 
acercándose al caso base con cada llamada.



*/

#include <iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;//base
    }

    return n*factorial(n-1); //recursivo
}
int main() {
    int n;
    cin >> n;
    
    int result=factorial(n);
    cout << "Factorial of " << n << " is " << result << endl;
    
    return 0;
}