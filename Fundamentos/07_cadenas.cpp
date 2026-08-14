/*
--------------- CADENAS al estilo C---------------
Las cadenas de estilo C se crean con el tipo char y 
terminan con el carácter nulo '\0'. Son cadenas terminadas en nulo.

Liberia: <cstring>
Acceder un elemento: name[position]
Cambiar un elemento: name[position]=newchar

Nota:
-Al declarar cadenas de estilo C, asigne espacio para todos los 
caracteres más uno para el terminador nulo '\0':

Nota: No puede asignar directamente una nueva cadena a una cadena
de estilo C después de su declaración. Utilice funciones como strcpy para copiar cadenas.

*/

#include <iostream>
#include <cstring>
using namespace std;
void printStringInfo(char str[]) {
    // Imprimir la cadena
    cout<<"String: "<<str<<endl;

    // Imprimir la longitud de la cadena
    cout<<"Length: "<<strlen(str)<<endl;
    // Imprimir el carácter en el índice 4

    cout<<"Character at index 4: "<<str[4]<<endl;
    // Modificar el primer carácter a 'X'
    str[0]='X';
    cout<<"Modified string: "<<str;

    // Imprimir la cadena modificada
    
}


void stringOperations(string str3) {
    // 1. Imprimir la longitud de la cadena
    cout<<"Length: "<<str3.length()<<endl;
    // 2. Añadir " - Modified" al final de la cadena
    cout<<"Append: "<<str3.append(" - Modified")<<endl;
    // 3. Insertar "C++ " al principio
    cout<<"Insert: "<<str3.insert(0,"C++ " )<<endl;
    // 4. Extraer una subcadena de longitud 5 empezando en la posición 5
    cout<<"Extract: "<<str3.substr(5,5)<<endl;
    // 5. Reemplazar la subcadena en la posición 5 con "Awesome"
    cout<<"Replace: "<<str3.replace(5,5,"Awesome");
}


void stringSearchOperations(string str4) {
    cout << "Space Found At: " << str4.find(" ") << endl;

    cout << "After Erase: " << str4.erase(5, 4) << endl;

    bool found = str4.find("You") != string::npos || str4.find("you") != string::npos;
    cout << "Contains You: " << (found ? "Found" : "Not Found") << endl;

    str4.clear();
    cout << "Is Empty: " << (str4.empty() ? "true" : "false") << endl;
}

int main() {
    char message[] = "Hello, World!";
    cout<<"Funcion de PrintStringInfo:"<<endl;
    printStringInfo(message);
    char saludo[]="Hello";
    // Correcto: "Hello" necesita 6 espacios (5 letras + '\0')
    char saludo2[7] = "Hello2";
    // Incorrecto: ¡Array demasiado pequeño!
    //char str2[5] = "Hello"; // Esto podría causar problemas

    // Correcto: El espacio extra está bien
    char saludo3[11] = "Hello3";
    cout << saludo << " " << saludo2 << " " << saludo3 << endl;

    cout<<"Funcion Operations:"<<endl;

    string str3;
    getline(cin, str3);
    stringOperations(str3);
    cout<<"Funcion de Search Operations:"<<endl;

    string str4;
    getline (cin, str4);
    stringSearchOperations(str4);

    return 0;
}