/*
    std::map - LISTA DE FUNCIONES CON DESCRIPCIÓN
*/

#include <iostream>
#include <map>
using namespace std;

int main() {

    //  CONSTRUCTORES 

    map<string, int> m1;                                  // map()                    -> crea un map vacío
    map<string, int> m2 = {{"a", 1}, {"b", 2}};            // map(initializer_list)    -> crea a partir de lista de pares
    map<string, int> m3(m2.begin(), m2.end());             // map(begin, end)          -> copia un rango de iteradores
    map<string, int> m4(m2);                               // map(otroMap)             -> constructor de copia
    map<string, int, greater<string>> m5;                  // map(comparador)          -> usa un comparador personalizado (ej. orden descendente)


    //  ACCESO A ELEMENTOS 

    m2.at("a");                  // at(clave)      -> valor asociado a la clave, lanza excepción si no existe
    m2["c"];                    // operator[]      -> accede al valor; si la clave no existe, la crea con valor por defecto


    //  CAPACIDAD 

    m2.size();                  // size()          -> número de pares clave-valor almacenados
    m2.empty();                  // empty()         -> true si el map no tiene elementos
    m2.max_size();                 // max_size()      -> máximo teórico de elementos que puede contener


    //  MODIFICADORES 

    m2.insert({"d", 4});                     // insert(par)              -> inserta un par clave-valor (si la clave no existe)
    m2.insert(m3.begin(), m3.end());         // insert(begin, end)       -> inserta un rango de pares de otro contenedor
    m2.insert_or_assign("a", 100);           // insert_or_assign(k, v)   -> inserta o actualiza el valor de una clave (C++17)
    m2.emplace("e", 5);                      // emplace(clave, valor)    -> construye el par directamente dentro del map
    m2.emplace_hint(m2.begin(), "f", 6);     // emplace_hint(pos, k, v)  -> igual que emplace, con posición sugerida (optimización)
    m2.erase("a");                           // erase(clave)             -> elimina el elemento con esa clave
    m2.erase(m2.begin());                    // erase(iterador)          -> elimina el elemento en esa posición
    m2.erase(m2.begin(), m2.end());          // erase(begin, end)        -> elimina un rango de elementos
    m2.clear();                              // clear()                  -> elimina todos los elementos
    m2.swap(m3);                             // swap(otroMap)            -> intercambia el contenido con otro map
    m2.merge(m3);                            // merge(otroMap)           -> mueve elementos de otro map que no dupliquen claves (C++17)
    auto node = m3.extract("b");             // extract(clave)           -> extrae un nodo del map sin destruirlo (C++17)


    //  BÚSQUEDA 

    m2.find("b");                    // find(clave)         -> iterador al elemento con esa clave, o end() si no existe
    m2.count("b");                    // count(clave)        -> número de elementos con esa clave (0 o 1 en map)
    m2.lower_bound("b");                 // lower_bound(clave)   -> iterador al primer elemento >= clave
    m2.upper_bound("b");                   // upper_bound(clave)   -> iterador al primer elemento > clave
    m2.equal_range("b");                     // equal_range(clave)   -> par de iteradores [lower_bound, upper_bound]


    //  ITERADORES 

    m2.begin();    // begin()   -> iterador al primer elemento (menor clave)
    m2.end();      // end()     -> iterador a la posición siguiente al último elemento
    m2.cbegin();   // cbegin()  -> iterador constante al inicio (solo lectura)
    m2.cend();     // cend()    -> iterador constante al final (solo lectura)
    m2.rbegin();   // rbegin()  -> iterador inverso al último elemento (mayor clave)
    m2.rend();     // rend()    -> iterador inverso a la posición antes del primero
    m2.crbegin();  // crbegin() -> iterador inverso constante al inicio del reverso
    m2.crend();    // crend()   -> iterador inverso constante al final del reverso


    //  OPERADORES 

    m3 = m2;               // operator=  -> asigna el contenido de un map a otro
    bool r1 = (m2 == m3);  // operator== -> true si tienen los mismos pares clave-valor
    bool r2 = (m2 != m3);  // operator!= -> true si son diferentes
    bool r3 = (m2 < m3);   // operator<  -> comparación lexicográfica menor que
    bool r4 = (m2 <= m3);  // operator<= -> comparación lexicográfica menor o igual
    bool r5 = (m2 > m3);   // operator>  -> comparación lexicográfica mayor que
    bool r6 = (m2 >= m3);  // operator>= -> comparación lexicográfica mayor o igual


    //  OTRAS FUNCIONES 

    m2.key_comp();              // key_comp()            -> devuelve el objeto comparador usado para ordenar las claves
    m2.value_comp();             // value_comp()           -> devuelve el objeto comparador aplicado a pares clave-valor
    m2.get_allocator();           // get_allocator()        -> devuelve el allocator usado por el map
    swap(m2, m3);                  // std::swap(m1, m2)      -> intercambia dos maps (función no miembro)
    // std::erase_if(m2, pred);      // std::erase_if(m, pred) -> elimina elementos que cumplan una condición (C++20)

    return 0;
}