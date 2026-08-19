// ---------- OPERADORES verdaderos usables con arrays en C++17 ----------
// (std::array<T,N> y arrays estilo C: T arr[N])
// Ordenados alfabéticamente

=      // Asignación: copia todos los elementos de un std::array a otro (arrays de C no lo permiten)
,      // Coma: evalúa varias expresiones en orden y descarta todas menos la última
--     // Decremento: retrocede un puntero a la posición anterior en memoria
*      // Desreferenciación: accede al valor apuntado cuando el array decae a puntero
!=     // Diferente: compara elemento a elemento, true si algún par difiere
&      // Dirección de memoria: obtiene la dirección de un elemento o del array completo
==     // Igual: compara elemento a elemento (std::array)
++     // Incremento: avanza un puntero al siguiente elemento del array
[]     // Índice/Subíndice: accede a un elemento por posición, sin verificar límites
>      // Mayor que: compara lexicográficamente dos std::array del mismo tipo
>=     // Mayor o igual que: compara lexicográficamente dos std::array
<      // Menor que: compara lexicográficamente dos std::array
<=     // Menor o igual que: compara lexicográficamente dos std::array
-      // Resta de punteros: calcula la distancia, en elementos, entre dos punteros del mismo array
sizeof // Tamaño en bytes de un array, calculado en tiempo de compilación
+      // Suma de punteros: desplaza un puntero n posiciones dentro del array


// ---------- FUNCIONES MIEMBRO de std::array (NO son operadores) ----------
// Ordenadas alfabéticamente

at(i)        // Acceso a elemento con verificación de límites (lanza excepción si i es inválido)
back()       // Referencia al último elemento
begin()      // Iterador al primer elemento
cbegin()     // Iterador constante al primer elemento
cend()       // Iterador constante al final (posición pasando el último elemento)
crbegin()    // Iterador constante inverso, comienza en el último elemento
crend()      // Iterador constante inverso, final (antes del primero)
data()       // Puntero crudo (T*) al bloque de memoria interno del array
empty()      // true si el array tiene tamaño 0 (solo posible si N == 0)
end()        // Iterador al final (posición pasando el último elemento)
fill(valor)  // Asigna el mismo valor a todos los elementos
front()      // Referencia al primer elemento
max_size()   // Tamaño máximo (igual a size(), ya que N es fijo)
rbegin()     // Iterador inverso, comienza en el último elemento
rend()       // Iterador inverso, final (antes del primero)
size()       // Cantidad de elementos del array (N)
swap(otro)   // Intercambia el contenido con otro std::array del mismo tipo y tamaño


// ---------- FUNCIONES LIBRES en <iterator>/<array> (C++17) ----------
// Funcionan tanto con std::array como con arrays estilo C: T arr[N]
// Ordenadas alfabéticamente

std::begin(arr)  // Devuelve iterador/puntero al primer elemento
std::data(arr)   // Devuelve puntero crudo al primer elemento
std::empty(arr)  // true si el contenedor/array está vacío
std::end(arr)    // Devuelve iterador/puntero al final
std::size(arr)   // Devuelve la cantidad de elementos (funciona incluso con T arr[N])

