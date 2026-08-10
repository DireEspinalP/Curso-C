//      ----------OPERADORESS----------
/*
1) Aritmeticos:
Sum: "+" | Resta: "-" | Product: "*" | Division: "/"

2) Modulo:
    a&b= a/b+c=>resto 
    fmod(a,b) / a,b son float o double (<cmath>)

3) Incremento y Decremento :
    Sufijo:
        variable++; /aumenta +1 (analogamente con resta)
        variable+=n /aumenta +n (analogamente con resta, multiplicacion y division)
    Prefijo:
    ++x o --x : Incrementa/decrementa la variable primero, luego devuelve el nuevo valor
4) Logicos:
    "&&" (and)| "||" (or) | "!" (not)
*/ 
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    //arit
    double a=5.2;
    double b=2.6;
    double c=a/b;
    cout <<"Division a/b (a=5.2 y b=2.6) = "<< c<<endl;
    //Mod
    cout<<"Modulo entero: 11 & 9 = "<<11%9<<endl;
    cout<<"Modulo flotante: 2.5 & 1.5 = "<<fmod(2.5,1.5)<<endl;

    //Incremento y Decremento
    int value=10;
    value++;
    cout<<"\nNuevo valor de 10 es "<<value<<endl;
    value+=2;
    value*=4;
    cout<<"El nuevo valor de 11 es "<<value<<endl;
    value/=2;
    cout<<"El nuevo valor de 52 es "<<value<<endl;

    //Prefijos y Sufijos
    int x1 = 5;
    int a1 = x1++;   // SUFIJO: a1 toma el valor viejo de x1, luego x1 aumenta
    cout << "\na1 = " << a1 << endl;   // 5
    cout << "x1 = " << x1 << endl;   // 6
    int y1 = 5;
    int b1 = ++y1;   // PREFIJO: y1 aumenta primero, luego b1 toma ese valor nuevo
    cout << "b1 = " << b1 << endl;   // 6
    cout << "y1 = " << y1 << endl;   // 6

    //Logic
    int valor1 = 4;
    int valor2 = 2;
    bool valor3 = !((valor1 + valor2) > (valor1 * valor2));
    cout << "\nEl resultado de la operacion combinada es " << valor3 << endl;
    return 0;
}