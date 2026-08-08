
// ---------- Compatibilidad con C ----------
#include <cassert>   // assert(): verifica condiciones en tiempo de ejecución (depuración)
#include <cctype>    // Clasificación y conversión de caracteres (isdigit, toupper, etc.)
#include <cerrno>    // Manejo del código de error global "errno"
#include <cfenv>     // Control del entorno de punto flotante (redondeo, excepciones)
#include <cfloat>    // Límites de tipos de punto flotante (FLT_MAX, DBL_MIN, etc.)
#include <cinttypes> // Macros de formato para tipos enteros de <cstdint>
#include <climits>   // Límites de tipos enteros (INT_MAX, CHAR_BIT, etc.)
#include <clocale>   // Configuración regional (idioma, formato de números, moneda)
#include <cmath>     // Funciones matemáticas (sqrt, pow, sin, cos, log, etc.)
#include <csetjmp>   // Saltos no locales setjmp/longjmp (poco usado, bajo nivel)
#include <csignal>   // Manejo de señales del sistema operativo (SIGINT, SIGTERM)
#include <cstdarg>   // Funciones con número variable de argumentos (va_list)
#include <cstddef>   // Tipos básicos: size_t, ptrdiff_t, nullptr_t, byte
#include <cstdint>   // Enteros de ancho fijo: int32_t, uint8_t, etc.
#include <cstdio>    // Entrada/salida estilo C: printf, scanf, FILE
#include <cstdlib>   // Utilidades generales: malloc, exit, rand, atoi, sistema
#include <cstring>   // Manipulación de cadenas C (char*): strcpy, strlen, memcpy
#include <ctime>     // Fecha y hora estilo C: time(), clock(), struct tm
#include <cuchar>    // Conversión de caracteres Unicode (char16_t, char32_t)
#include <cwchar>    // Manejo de cadenas de caracteres anchos (wchar_t)
#include <cwctype>   // Clasificación de caracteres anchos (iswdigit, etc.)

// ---------- Utilidades generales ----------
#include <any>              // Tipo "any": contenedor que guarda cualquier tipo de dato
#include <bitset>           // Manejo eficiente de secuencias de bits fijas
#include <chrono>           // Medición de tiempo, duraciones y relojes de alta precisión
#include <compare>          // (C++20) Operador de comparación "<=>" (three-way comparison)
#include <functional>       // Objetos función: std::function, bind, lambdas, operadores
#include <initializer_list> // Soporte para listas de inicialización {1,2,3}
#include <optional>         // Representa un valor que puede estar presente o ausente
#include <source_location>  // (C++20) Obtiene archivo/línea/función actual en tiempo de compilación
#include <tuple>            // Agrupa varios valores de distintos tipos en una sola estructura
#include <type_traits>      // Introspección y manipulación de tipos en tiempo de compilación
#include <typeindex>        // Permite usar std::type_info como clave en contenedores
#include <typeinfo>         // Información de tipo en tiempo de ejecución (RTTI, typeid)
#include <utility>          // Utilidades varias: std::pair, std::move, std::swap
#include <variant>          // Tipo unión segura: guarda uno de varios tipos posibles
#include <version>          // (C++20) Información sobre versiones y características soportadas

// ---------- Conceptos y corrutinas (nuevos en C++20) ----------
#include <concepts> // Define restricciones/requisitos para plantillas genéricas (templates)
#include <coroutine> // Soporte nativo para corrutinas (funciones que se pueden pausar/reanudar)

// ---------- Gestión de memoria dinámica ----------
#include <memory>           // Punteros inteligentes: unique_ptr, shared_ptr, weak_ptr
#include <memory_resource>  // Asignadores de memoria personalizados (pool, monotonic, etc.)
#include <new>              // Control de asignación/liberación de memoria (operator new/delete)
#include <scoped_allocator> // Asignadores compuestos para contenedores anidados

// ---------- Numérica ----------
#include <bit>      // (C++20) Manipulación de bits: rotaciones, conteo, conversiones bit a bit
#include <complex>  // Números complejos y operaciones matemáticas sobre ellos
#include <numeric>  // Algoritmos numéricos: accumulate, reduce, gcd, lcm
#include <random>   // Generadores de números aleatorios y distribuciones estadísticas
#include <ratio>    // Aritmética de fracciones/razones en tiempo de compilación
#include <valarray> // Arreglos numéricos optimizados para operaciones vectorizadas

// ---------- Cadenas de texto ----------
#include <charconv>    // Conversión rápida y eficiente entre texto y números (from_chars/to_chars)
#include <string>      // Clase std::string para manejo de cadenas de texto dinámicas
#include <string_view> // Vista de solo lectura sobre una cadena, sin copiar memoria

// ---------- Contenedores ----------
#include <array>          // Arreglo de tamaño fijo con interfaz moderna (std::array)
#include <deque>          // Cola doblemente terminada (inserción/borrado eficiente en ambos extremos)
#include <forward_list>   // Lista enlazada simple (un solo sentido)
#include <list>           // Lista doblemente enlazada
#include <map>            // Contenedor asociativo ordenado clave-valor (árbol balanceado)
#include <queue>          // Cola FIFO (primero en entrar, primero en salir)
#include <set>            // Conjunto ordenado de elementos únicos
#include <stack>          // Pila LIFO (último en entrar, primero en salir)
#include <unordered_map>  // Mapa clave-valor basado en tabla hash (más rápido, sin orden)
#include <unordered_set>  // Conjunto basado en tabla hash, elementos únicos sin orden
#include <vector>         // Arreglo dinámico, el contenedor más usado en C++
#include <span>           // (C++20) Vista no propietaria sobre un arreglo o rango contiguo

// ---------- Iteradores y algoritmos ----------
#include <iterator>  // Definición y utilidades de iteradores para recorrer contenedores
#include <algorithm> // Algoritmos genéricos: sort, find, count, transform, etc.
#include <execution> // Políticas de ejecución (secuencial, paralela) para algoritmos

// ---------- Rangos (nuevo en C++20) ----------
#include <ranges> // Abstracción moderna sobre secuencias: vistas, filtros, composición fluida

// ---------- Localización ----------
#include <codecvt> // Conversión entre codificaciones de caracteres (obsoleto desde C++17)
#include <locale>  // Manejo avanzado de configuración regional (formatos, idiomas)

// ---------- Entrada / Salida ----------
#include <fstream>    // Lectura y escritura de archivos (ifstream, ofstream, fstream)
#include <iomanip>    // Manipuladores de formato de E/S: setprecision, setw, fixed
#include <ios>        // Definiciones base del sistema de flujos de E/S
#include <iosfwd>     // Declaraciones anticipadas de clases de flujos (reduce dependencias)
#include <iostream>   // Entrada/salida estándar: cin, cout, cerr
#include <istream>    // Clase base para flujos de entrada
#include <ostream>    // Clase base para flujos de salida
#include <sstream>    // Flujos sobre cadenas de texto en memoria (stringstream)
#include <streambuf>  // Buffer de bajo nivel usado internamente por los flujos
#include <strstream>  // Flujos sobre arreglos de caracteres (obsoleto, no usar en código nuevo)
#include <syncstream>  // (C++20) Flujos de salida sincronizados, seguros entre hilos

// ---------- Sistema de archivos ----------
#include <filesystem> // Manejo de rutas, directorios y archivos de forma portable (C++17+)

// ---------- Expresiones regulares ----------
#include <regex> // Búsqueda y manipulación de texto mediante expresiones regulares

// ---------- Operaciones atómicas ----------
#include <atomic> // Operaciones seguras entre hilos sin necesidad de mutex (bajo nivel)

// ---------- Soporte de hilos (threads) ----------
#include <condition_variable> // Sincronización: permite a un hilo esperar una condición
#include <future>             // Comunicación asíncrona entre hilos: promise, future, async
#include <mutex>              // Exclusión mutua: protege datos compartidos entre hilos
#include <shared_mutex>       // Mutex compartido: permite múltiples lectores o un escritor
#include <thread>             // Creación y manejo de hilos de ejecución (std::thread)
#include <stop_token>         // (C++20) Mecanismo cooperativo para detener hilos (jthread)
#include <barrier>            // (C++20) Sincroniza un grupo de hilos en un punto común, reutilizable
#include <latch>              // (C++20) Sincroniza hilos en un punto común, de un solo uso
#include <semaphore>          // (C++20) Control de acceso concurrente con contador (semáforos)

int main() {
    // Punto de entrada de demostración.
    // Si este archivo compila sin errores con:
    //     g++ -std=c++20 librerias_cpp20.cpp -o programa
    // significa que todas las librerías fueron incluidas correctamente.
    return 0;
}