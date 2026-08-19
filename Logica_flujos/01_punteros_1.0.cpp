/*---------------PUNTEROS---------------

# Introduccion:
¿Qué es un puntero?
Un puntero es un tipo especial de variable que almacena la dirección de memoria de otra variable, 
en lugar de almacenar un valor directamente. Piénsalo como una dirección postal que te indica dónde
encontrar una casa, en lugar de ser la casa en sí misma.

Para declarar un puntero en C++, se utiliza el símbolo de asterisco (*) en la declaración:

Los punteros son fundamentales para muchas características avanzadas de C++ porque permiten la manipulación 
directa de la memoria. Esto los convierte en herramientas poderosas para crear programas eficientes, gestionar
memoria dinámica y construir estructuras de datos complejas.

Comprender los punteros abre la puerta a trabajar con arreglos, funciones y conceptos de programación orientada
a objetos de manera más efectiva.


2) Operador de dirección:
Ahora que entiendes qué es un puntero, necesitas aprender cómo obtener realmente la dirección de memoria de una 
variable. Aquí es donde entra el operador de dirección (&).
El operador de dirección & se coloca antes del nombre de una variable para obtener su dirección de memoria. 
Cuando utilizas &variable_name, devuelve la ubicación en la memoria donde se almacena esa variable.


2) Operador de desreferencia:
Ahora que puedes obtener un pointer a una variable, necesitas aprender cómo acceder y modificar el valor en esa 
memory address. Aquí es donde el operador dereference (*) becomes esencial.
El operador dereference * se utiliza para acceder al valor almacenado en la address de memoria a la que está 
pointing un pointer. Cuando colocas * antes de una variable pointer, este "sigue" la address y te da el valor 
real almacenado allí.
Recuerda que el operador de dirección (&) se utiliza para obtener la dirección de memoria de una variable,
mientras que el operador de desreferenciación (*) se utiliza para acceder al valor en esa dirección.

*/

#include <iostream>
using namespace std;

int main() {
    // 1)
    int score=85;
    int* scorePtr=&score;
    cout<<"Address: "<<scorePtr; 

    //2)
    int initialValue, newValue;
    cin >> initialValue;
    cin >> newValue;
    int temperature=initialValue;
    int* tempPtr=&temperature;
    cout<<"Original value: "<<*tempPtr<<endl;
    *tempPtr=newValue;
    cout<<"New value: "<<newValue;


    return 0;
}