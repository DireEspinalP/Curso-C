/*
--------------- FUNCIONES ---------------
 1) Funcion: Una función es una secuencia de código que tiene un nombre, 
    utilizada para reutilizar código varias veces.

    -Sintaxis:
        access_modifier return_type function_name(parameters) {
             código
            }

    -Nota: La función debe ser declarada antes de ser llamada/ejecutada.

 2) Parametros: Los argumentos de una función son valores que se pasan a una
    función al llamarla. Define los argumentos dentro de los paréntesis con sus
    tipos de datos:

    -Sintaxis:
        return_type function_name(data_type arg1, data_type arg2, ...) {
             código
        }
    
     -Nota: Pasar demasiados argumentos a una función hará que el programa falle.

 3) Return : La sentencia return especifica el valor que una función produce como salida

     -Nota: El tipo de retorno de la función debe coincidir con el tipo de datos de la variable 
     que almacena el valor devuelto.

 4) Void: Una función void no devuelve ningún valor y se utiliza para realizar acciones sin producir un resultado

    -Sintaxis:
         void functionName(parameters) {
            Código 
        }

 5) Sobrecarga de funciones: La sobrecarga de funciones permite múltiples funciones con el mismo 
    nombre pero diferentes parámetros. El compilador selecciona la función adecuada basándose en 
    los tipos de los argumentos
    -Nota: Esto ya no se usara porque usaremos TEMPLATES para que el sistema sea mas flexible y 
    no usaremos variables primitivas repetitvas (El cambio codigo se vera en POO C++)
*/

#include <iostream>
#include <string>
using namespace std;

//Declaracion de la funcion
void print() {
   cout<<"Hola mundo"<<endl;
}

// Parametros
void product(int a, int b){
    cout<< a*b;
   
}

//Return
double bigger(double arg1, double arg2) {
    return (arg1 >= arg2) ? arg1 : arg2;
}

//Void 
void printNTimes(string message, int n) {
    for (int i=0; i<n; i++){
        cout<<message<<endl;
    }
}


//Sobrecarga de funciones
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}



int main() {
    cout<<"Funcion 1)"<<endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
       print(); //llama a la funcion "print" por la iteracion for
    }

    cout<<"Funcion 2)"<<endl;
    int a, b;
    cin >> a >> b;
    product(a,b);
    // Llama a la función con a y b como argumentos
    cout<<endl;
    cout<<"Funcion 3)"<<endl;
    int iterations;
    double num1, num2;
    cin >> iterations >> num1 >> num2;
    for (int i = 0; i < iterations; i++) {
        if (num1 < 2 || num2 < 2) {
            break;
        }

        double mayor = bigger(num1, num2);

        if (mayor == num1) {
            num1 = num1 / 2.0;
            cout << num1 << endl;
        } else {
            num2 = num2 / 2.0;
            cout << num2 << endl;
        }
    }

    cout<<"Funcion 4)"<<endl;
    string msg;
    int m;
    cin.ignore();
    getline(cin, msg); 
    cin >> m;
    printNTimes(msg, m);


    cout<<"Funcion 5)"<<endl;
    int suma1 = add(5, 3);         // Llama a la versión int
    double suma2 = add(2.5, 3.7); // Llama a la versión double
    cout << "add(int, int) = " << suma1 << endl;
    cout << "add(double, double) = " << suma2 << endl;
}
