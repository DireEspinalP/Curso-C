// -------Comentarios-------
// En cada linea: "//"
// En varias lineas: "/*" y "*/"
// Agregar en seccion: Crl+K+C
// Quitar en seccion: Crl+K+U


#include<iostream>
using namespace std; 

int main(){

    cout<<"Hola Mundo"<<endl;
}
/*
Observacion: toda operacion condicional, bucles,
funciones, encabezados... deben ir entre { } 

#include <iostream> — carga la biblioteca que te permite imprimir texto en la pantalla.

int main() { ... } — esta es la función principal, donde cada programa de C++ comienza a ejecutarse.

cout << "Hello, World!"; — imprime el texto Hello, World! en la pantalla.


Cuando ejecutes el código, verás que Hello, World! aparece en la salida.
cout<<  (iostream output) es una instancia (objeto) de la clase 
        std::ostream definida en la cabecera <iostream> dentro del
         espacio de nombres std. Se utiliza para enviar datos al dispositivo
         de salida estándar, que por defecto es la consola o terminal.


cin>>   Formalmente, cin es una instancia global de la clase istream 
        (flujo de entrada) definida dentro del espacio de nombres std 
        y declarada en la cabecera <iostream>.Representa al flujo de 
        entrada estándar orientado a caracteres (generalmente el teclado) 
        y está vinculado por defecto con el flujo de salida estándar cout.

std     En C++, std es la abreviatura de standard (estándar) y se define 
        formalmente como el espacio de nombres (namespace) principal donde 
        se agrupan todos los identificadores, clases, funciones, objetos y 
        plantillas que forman parte de la Biblioteca Estándar de C++.
*/