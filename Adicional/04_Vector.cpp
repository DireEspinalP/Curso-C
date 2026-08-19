/*

    std::vector - LISTA DE FUNCIONES CON DESCRIPCIÓN

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // CONSTRUCTORES

    vector<int> v1;                          // vector()                -> crea un vector vacío
    vector<int> v2(5);                       // vector(n)                -> 5 elementos inicializados en 0
    vector<int> v3(5, 100);                  // vector(n, valor)         -> 5 elementos con valor 100
    vector<int> v4(v3.begin(), v3.end());    // vector(begin, end)       -> copia un rango de iteradores
    vector<int> v5(v3);                      // vector(otroVector)       -> constructor de copia
    vector<int> v6 = {1, 2, 3};              // vector(initializer_list) -> crea a partir de lista {1,2,3}


    // ACCESO A ELEMENTOS

    v6.at(0);              // at(i)      -> elemento en posición i, con verificación de límites
    v6[0];                 // operator[] -> elemento en posición i, sin verificación de límites
    v6.front();             // front()    -> referencia al primer elemento
    v6.back();               // back()     -> referencia al último elemento
    v6.data();                 // data()     -> puntero al arreglo interno de memoria contigua


    // CAPACIDAD

    v6.size();               // size()            -> número de elementos actuales
    v6.empty();               // empty()           -> true si no tiene elementos
    v6.capacity();             // capacity()        -> elementos que puede contener sin reasignar memoria
    v6.max_size();               // max_size()        -> máximo teórico de elementos
    v6.reserve(20);                 // reserve(n)        -> reserva memoria para al menos n elementos
    v6.shrink_to_fit();               // shrink_to_fit()   -> reduce capacidad al tamaño actual


    // MODIFICADORES

    v6.push_back(4);                    // push_back(valor)         -> agrega un elemento al final
    v6.pop_back();                      // pop_back()               -> elimina el último elemento
    v6.insert(v6.begin(), 10);          // insert(pos, valor)       -> inserta un elemento en una posición
    v6.insert(v6.begin(), 2, 0);        // insert(pos, n, valor)    -> inserta n copias de un valor
    v6.insert(v6.begin(), v3.begin(), v3.end()); // insert(pos, begin, end) -> inserta un rango de otro contenedor
    v6.erase(v6.begin());               // erase(pos)               -> elimina el elemento en una posición
    v6.erase(v6.begin(), v6.begin()+2); // erase(begin, end)        -> elimina un rango de elementos
    v6.emplace(v6.begin(), 99);         // emplace(pos, args...)    -> construye elemento directamente en la posición
    v6.emplace_back(55);                // emplace_back(args...)    -> construye elemento directamente al final
    v6.resize(3);                       // resize(n)                -> cambia el tamaño, trunca o rellena con 0
    v6.resize(6, 7);                    // resize(n, valor)         -> cambia el tamaño, rellena nuevos con valor
    v6.assign(4, 8);                    // assign(n, valor)         -> reemplaza contenido con n copias de valor
    v6.assign(v3.begin(), v3.end());    // assign(begin, end)       -> reemplaza contenido con un rango
    v6.assign({1, 2, 3});               // assign(initializer_list) -> reemplaza contenido con lista {...}
    v6.clear();                         // clear()                  -> elimina todos los elementos
    v6.swap(v3);                        // swap(otroVector)         -> intercambia contenido con otro vector


    // ITERADORES

    v6.begin();    // begin()   -> iterador al primer elemento
    v6.end();      // end()     -> iterador a la posición siguiente al último elemento
    v6.cbegin();   // cbegin()  -> iterador constante al inicio (solo lectura)
    v6.cend();     // cend()    -> iterador constante al final (solo lectura)
    v6.rbegin();   // rbegin()  -> iterador inverso al último elemento
    v6.rend();     // rend()    -> iterador inverso a la posición antes del primero
    v6.crbegin();  // crbegin() -> iterador inverso constante al inicio del reverso
    v6.crend();    // crend()   -> iterador inverso constante al final del reverso


    // OPERADORES

    v4 = v3;             // operator=  -> asigna el contenido de un vector a otro
    bool r1 = (v3 == v4); // operator== -> true si tienen los mismos elementos en el mismo orden
    bool r2 = (v3 != v4); // operator!= -> true si son diferentes
    bool r3 = (v3 < v4);  // operator<  -> comparación lexicográfica menor que
    bool r4 = (v3 <= v4); // operator<= -> comparación lexicográfica menor o igual
    bool r5 = (v3 > v4);  // operator>  -> comparación lexicográfica mayor que
    bool r6 = (v3 >= v4); // operator>= -> comparación lexicográfica mayor o igual


    // OTRAS FUNCIONES

    v6.get_allocator();      // get_allocator()          -> devuelve el allocator usado por el vector
    swap(v3, v4);             // std::swap(v1, v2)        -> intercambia dos vectores (función no miembro)
    // std::erase(v6, 5);       // std::erase(v, valor)     -> elimina elementos con ese valor (C++20)
    // std::erase_if(v6, pred); // std::erase_if(v, pred)   -> elimina elementos que cumplan una condición (C++20)

    return 0;
}