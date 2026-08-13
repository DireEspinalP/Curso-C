/* --------------VARIABLES-----------------
Las variables son contenedores que guardan valores de datos.
Se utilizan para almacenar, manipular y mostrar información dentro de un programa.
En resumen, una variable es como una unidad de memoria a la que podemos acceder 
escribiendo el nombre de la variable. 

Cada variable tiene un nombre único y un valor que puede ser de diferentes tipos.
C++ tiene varios tipos de datos integrados que definen el tipo de valor que una 
variable puede contener.

Trabajar con variables implica dos pasos:

-Declaracion: Decir a la computadoradora que existe la variable
-Incializacion:  Asignarle el valor a la varible


Tipos de variables:
int, double,float,string,char,bool...
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int quantity=5;
    float score=10.0;
    auto price=9.99;
    string coddy= "I am learning to code with Dire";
    bool isLoggedIn = true;
    char initial = 'B';
    const double PI=3.14159;
    // variable_type variable_name = value;
  
    cout << "Quantity: " << quantity<<endl;
    cout<<"Score: "<< score<<endl;
    cout<<"Price: "<<price<<endl;
    cout << "Coddy = \"" << coddy << "\"" <<endl;
    cout << "isLoggedIn = " << isLoggedIn<<endl;
    cout << "initial = '" << initial << "'"<<endl;
    cout << "PI = " << PI<<endl;
    return 0;
}

/* OBSERVACION:
1) C++ también proporciona la palabra clave auto, que permite al
compilador deducir automáticamente el tipo de una variable a
partir de su valor asignado.

2) Una constante es un tipo especial de variable
que no se puede cambiar una vez que se inicializa.
*/
