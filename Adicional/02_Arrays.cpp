#include <iostream>
#include <array>     // std::array<T,N>
#include <iterator>  // std::begin, std::end, std::size, std::data, std::empty
using namespace std;

int main() {

    // 
    // ---------- OPERADORES verdaderos usables con arrays en C++17 ----------
    // (std::array<T,N> y arrays estilo C: T arr[N])
    // 

    std::array<int, 5> a1 = {1, 2, 3, 4, 5};
    std::array<int, 5> a2 = {1, 2, 3, 4, 5};
    std::array<int, 5> a3 = {9, 8, 7, 6, 5};
    int cArr[5] = {10, 20, 30, 40, 50};   // array estilo C

    a1 = a2;                          // =    -> Asignación: copia todos los elementos (std::array; arrays de C no lo permiten)
    (void)(a1[0], a1[1]);             // ,    -> Coma: evalúa varias expresiones en orden y descarta todas menos la última

    int* p = cArr;                    // el array decae a puntero
    p++;                              // ++   -> Incremento: avanza un puntero al siguiente elemento del array
    p--;                              // --   -> Decremento: retrocede un puntero a la posición anterior en memoria
    int val = *p;                     // *    -> Desreferenciación: accede al valor apuntado cuando el array decae a puntero
    (void)val;

    bool rDif  = (a1 != a3);          // !=   -> Diferente: compara elemento a elemento, true si algún par difiere
    int* dirCArr = &cArr[0];          // &    -> Dirección de memoria: obtiene la dirección de un elemento o del array completo
    bool rIgual = (a1 == a2);         // ==   -> Igual: compara elemento a elemento (std::array)
    int primero = cArr[0];            // []   -> Índice/Subíndice: accede a un elemento por posición, sin verificar límites
    bool rMay   = (a3 > a1);          // >    -> Mayor que: compara lexicográficamente dos std::array del mismo tipo
    bool rMayIg = (a3 >= a1);         // >=   -> Mayor o igual que: compara lexicográficamente dos std::array
    bool rMen   = (a1 < a3);          // <    -> Menor que: compara lexicográficamente dos std::array
    bool rMenIg = (a1 <= a3);         // <=   -> Menor o igual que: compara lexicográficamente dos std::array

    int* p1 = &cArr[0];
    int* p2 = &cArr[3];
    ptrdiff_t dist = p2 - p1;         // -    -> Resta de punteros: distancia (en elementos) entre dos punteros del mismo array

    size_t tam = sizeof(cArr);        // sizeof -> Tamaño en bytes de un array, calculado en tiempo de compilación

    int* p3 = cArr + 2;               // +    -> Suma de punteros: desplaza un puntero n posiciones dentro del array

    (void)dirCArr; (void)primero; (void)rDif; (void)rIgual;
    (void)rMay; (void)rMayIg; (void)rMen; (void)rMenIg; (void)dist; (void)tam; (void)p3;

    cout << "----- OPERADORES -----" << endl;
    cout << "a1 == a2 ? " << rIgual << endl;
    cout << "a1 != a3 ? " << rDif << endl;
    cout << "a3 > a1  ? " << rMay << endl;
    cout << "distancia p2-p1 = " << dist << endl;
    cout << "sizeof(cArr) = " << tam << " bytes" << endl;


    // 
    // ---------- FUNCIONES MIEMBRO de std::array (NO son operadores) ----------
    // 

    cout << "\n----- FUNCIONES MIEMBRO std::array -----" << endl;

    a1.at(2);            // at(i)        -> Acceso a elemento con verificación de límites (lanza excepción si i es inválido)
    a1.back();           // back()       -> Referencia al último elemento
    a1.begin();          // begin()      -> Iterador al primer elemento
    a1.cbegin();         // cbegin()     -> Iterador constante al primer elemento
    a1.cend();           // cend()       -> Iterador constante al final (posición pasando el último elemento)
    a1.crbegin();        // crbegin()    -> Iterador constante inverso, comienza en el último elemento
    a1.crend();          // crend()      -> Iterador constante inverso, final (antes del primero)
    a1.data();           // data()       -> Puntero crudo (T*) al bloque de memoria interno del array
    a1.empty();          // empty()      -> true si el array tiene tamaño 0 (solo posible si N == 0)
    a1.end();            // end()        -> Iterador al final (posición pasando el último elemento)
    a1.fill(7);           // fill(valor)  -> Asigna el mismo valor a todos los elementos
    a1.front();          // front()      -> Referencia al primer elemento
    a1.max_size();        // max_size()   -> Tamaño máximo (igual a size(), ya que N es fijo)
    a1.rbegin();          // rbegin()     -> Iterador inverso, comienza en el último elemento
    a1.rend();            // rend()       -> Iterador inverso, final (antes del primero)
    a1.size();             // size()       -> Cantidad de elementos del array (N)
    a1.swap(a3);            // swap(otro)   -> Intercambia el contenido con otro std::array del mismo tipo y tamaño

    cout << "at(2) = " << a1.at(2) << endl;
    cout << "front() = " << a1.front() << ", back() = " << a1.back() << endl;
    cout << "size() = " << a1.size() << ", max_size() = " << a1.max_size() << endl;
    cout << "empty() = " << a1.empty() << endl;

    cout << "a1 tras fill(7) y swap(a3): ";
    for (int x : a1) cout << x << " ";
    cout << endl;


    // 
    // ---------- FUNCIONES LIBRES en <iterator>/<array> (C++17) ----------
    // Funcionan tanto con std::array como con arrays estilo C: T arr[N]
    // 

    cout << "\n----- FUNCIONES LIBRES <iterator> -----" << endl;

    std::begin(cArr);  // std::begin(arr) -> Devuelve iterador/puntero al primer elemento
    std::data(cArr);   // std::data(arr)  -> Devuelve puntero crudo al primer elemento
    std::empty(cArr);  // std::empty(arr) -> true si el contenedor/array está vacío
    std::end(cArr);    // std::end(arr)   -> Devuelve iterador/puntero al final
    std::size(cArr);   // std::size(arr)  -> Devuelve la cantidad de elementos (funciona incluso con T arr[N])

    cout << "std::size(cArr) = " << std::size(cArr) << endl;
    cout << "std::empty(cArr) = " << std::empty(cArr) << endl;
    cout << "std::data(cArr)[0] = " << *std::data(cArr) << endl;

    cout << "recorrido con std::begin/std::end: ";
    for (auto it = std::begin(cArr); it != std::end(cArr); ++it) cout << *it << " ";
    cout << endl;

    return 0;
}