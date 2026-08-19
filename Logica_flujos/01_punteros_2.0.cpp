/*---------------PUNTEROS II)---------------

1) Puntero nulos: 
Cuando declaras un puntero, este no apunta automáticamente a nada significativo. 
Un puntero no inicializado contiene direcciones de memoria aleatorias, lo que puede provocar
errores graves si intentas usarlo. Aquí es donde los punteros nulos se vuelven esenciales 
para una programación segura.

Un puntero nulo es un puntero que apunta explícitamente a nada. En C++ moderno, se crea un 
puntero nulo inicializándolo con nullptr

Esta práctica evita que su programa falle debido al acceso a ubicaciones de memoria no válidas. 
Siempre inicialice los punteros en nullptr cuando los declare, y compruebe si son nulos antes 
de desreferenciarlos.


2) Punteros y arrays:
Los arreglos y los punteros tienen una relación especial en C++. Cuando declaras un arreglo, 
el nombre del arreglo actúa en realidad como un puntero al primer elemento de ese arreglo. 
Esta conexión te permite usar punteros para trabajar con arreglos de formas poderosas.

Considera esta declaración de array:

int numbers[5] = {10, 20, 30, 40, 50};
int* ptr = numbers;  // ptr ahora apunta a numbers[0]

Aquí, numbers es equivalente a &numbers[0] - ambos te dan la dirección del primer elemento. 
El puntero ptr ahora apunta a la misma ubicación.

Una vez que tienes un puntero a un array, puedes usar aritmética de punteros para navegar a 
través de los elementos. Sumar 1 a un puntero lo mueve al siguiente elemento del mismo tipo:

ptr++;        // Ahora apunta a numbers[1]
ptr = ptr + 2; // Ahora apunta a numbers[3]
Puedes desreferenciar el puntero en cualquier posición para acceder al valor: *ptr te da el 
valor en la posición actual, y *(ptr + 1) te da el valor del siguiente elemento.

Esta relación entre punteros y arreglos le permite iterar a través de arreglos utilizando 
punteros en lugar de los bucles tradicionales basados en índices, ofreciendo un enfoque 
alternativo para el recorrido de arreglos.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    //Puntero nulo
    string input;
    cin >> input;
    
    int data = 42;
    int* ptr;

    if (input == "valid") {
        ptr = &data;
    } else {
         ptr = nullptr;
    }

    if (ptr != nullptr) {
         cout<<"Value: "<<data;
    } else {
         cout<<"Pointer is null - cannot dereference";
    }
    //Punteros de arrays
     int values[6] = {15, 23, 8, 42, 17, 31};
    
    int* parr=values;
        for(size_t i=0; i<size(values); i++){
        cout<<"Element: "<<*(parr+i)<<endl;
    }
    return 0;
}
/*
OJO: size_t:  es un tipo de dato entero sin signo estándar que
     se utiliza para representar el tamaño de un objeto en bytes
*/