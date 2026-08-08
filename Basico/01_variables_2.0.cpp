/*
------------Type Casting------------
La conversión de tipos es el proceso de convertir 
un valor de un tipo de datos a otro.

En C++, podemos convertir enteros a     doubles, 
    doubles a enteros y más. Existen dos tipos de 
conversión (casting): implícita (automática) y 
explícita (manual).

*/
#include <iostream>
#include <string>
using namespace std;
int main() {
//IMPLICITO
    double price = 99.99;
    int intPrice = (int)price; // Conversión explícita de double a int

//EXPLICITO
    int number = 5;
    double decimalEx = number; // automáticamente se convierte en 5.0
    int x = 7;
    double result = x / 2.0; // el resultado es 3.5

//MODERNO 
    double decimalModerno = 9.7;
    int number2 = static_cast<int>(decimalModerno);  // se convierte en 9 (la parte decimal se trunca)

    double price2 = 19.99;
    int roundedPrice = static_cast<int>(price);  // se convierte en 19

//Adicional
// Double-->String
    double n1 = 789.0;
    string text3 = to_string(n1);
// se convierte en "789.000000"
    double n2 = 789.5;
    string text4 = to_string(n2);
// se convierte en "789.500000"
    double n3 = 789.123;
    string text5 = to_string(n3);
// se convierte en "789.123000"

//String--Double
    string decimalText = "45.67";
    double decimal = stod(decimalText);  // se convierte en 45.67
// Cadena --entero
    string numberText = "123";
    int number_text = stoi(numberText);  // se convierte en 123


    cout<<"------------IMPLICITO------------"<<endl;
    cout<<price<<endl;
    cout<<intPrice<<endl;

    cout<<"------------EXPLICITO------------"<<endl;
    cout<<number<<endl;
    cout<<decimalEx<<endl;
    cout<<result<<endl;

    cout<<"------------MODERNO------------"<<endl;
    cout<<decimalModerno<<endl;
    cout<<number2<<endl;
    cout<<price2<<endl;
    cout<<roundedPrice<<endl;

    cout<<"------------ Double-->String------------"<<endl;
    cout<<n1<<endl;
    cout<<text3<<endl;
    cout<<n2<<endl;
    cout<<text4<<endl;
    cout<<n3<<endl;
    cout<<text5<<endl;

    cout<<" ------------String-->Double------------"<<endl;
    cout<<decimalText<<endl;
    cout<<decimal<<endl;

    cout<<"------------Cadena --> Entero------------"<<endl;
    cout<<numberText<<endl;
    cout<<number_text<<endl;
    return 0;
}