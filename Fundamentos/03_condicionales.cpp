// --------CONDICIONALES------------
/*
    1) if: Si la condición es true, se ejecutará el bloque de código dentro de las llaves.
     if(condition){code}

    2) if else: Usa else if para comprobar múltiples condiciones

    3) else: Usa else para ejecutar código cuando la condición if no se cumple

    4) switch es un condicional de múltiples vías que comprueba una variable frente a múltiples casos
        -case: representa un valor posible de la variable
        -break: sale del switch después de que se ejecuta un caso (evita el "fall-through")
        -default: caso opcional ejecutado si ningún otro caso coincide
    5) operador condicional: El operador condicional es una declaración if-else de una sola línea con la sintaxis
        variable = (condition) ? value_if_true : value_if_false;
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    // if
    int a = 0;
    int b = 0; 
    int c = 0;
    cout<<"\nUsando solo if"<<endl;
    if (a >= b && !(b < 10)) {
        c = 2;
    }
    c += 1;
    cout << "c = " << c;
    // if , if else, else
    int age=20;
    string status;
    cout<<"\nUsando if, if else y else"<<endl;
    if (age < 18) {
     status = "Young";
    } else if (age >= 18 && age <= 65) {
        status = "Adult";
    } else {
    status = "Old";
    }
    // switch
    cout<<"\nUsando Switch"<<endl;
    int x = 2;
    switch (x) {
        case 1: cout << "Uno"; break;
        case 2: cout << "Dos"; break;
        default: cout << "Otro";
    }

    cout<<"\nUsando Operador condiconal"<<endl;
    int score = 100;
    string result = (score == 100) ? "Perfect!" : (score >= 90) ? "Excellent" : "Good";
    return 0;
}