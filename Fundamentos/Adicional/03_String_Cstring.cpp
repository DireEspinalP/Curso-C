#include <cstring>   // cadenas estilo C  (char[] / char*)
#include <string>    // clase std::string (C++)

// ==========================================================================
//                     LIBRERIA <cstring>  (char[] / char*)
// ==========================================================================

// ---- LONGITUD ----
strlen(str);                  // longitud de la cadena (sin contar '\0')

// ---- COPIA ----
strcpy(dest, src);            // copia src en dest completo (sin control de tamaño)
strncpy(dest, src, n);        // copia maximo n caracteres de src en dest
memcpy(dest, src, n);         // copia n bytes de memoria de src a dest
memmove(dest, src, n);        // copia n bytes, seguro aunque src y dest se solapen

// ---- CONCATENACION ----
strcat(dest, src);            // concatena src al final de dest
strncat(dest, src, n);        // concatena maximo n caracteres de src al final de dest

// ---- COMPARACION ----
strcmp(str1, str2);           // compara: 0=iguales, <0 str1<str2, >0 str1>str2
strncmp(str1, str2, n);       // compara solo los primeros n caracteres
memcmp(ptr1, ptr2, n);        // compara n bytes de memoria

// ---- BUSQUEDA ----
strchr(str, c);                // primera aparicion del caracter c
strrchr(str, c);               // ultima aparicion del caracter c
strstr(str, substr);           // primera aparicion de la subcadena substr
strpbrk(str, chars);           // primera aparicion de cualquiera de los caracteres dados
strspn(str, chars);            // num de chars iniciales que SI pertenecen al set
strcspn(str, chars);           // num de chars iniciales que NO pertenecen al set
memchr(ptr, c, n);             // busca el byte c en los primeros n bytes

// ---- TOKENIZACION ----
strtok(str, delim);            // divide la cadena en tokens usando delimitadores

// ---- UTILIDAD ----
memset(ptr, valor, n);         // rellena n bytes de memoria con un valor
strerror(errnum);              // mensaje de error legible segun codigo errno

// ---- OPERADORES SOBRE char[] / char* ----
str[i];                        // []  -> acceso/modificacion de un caracter por indice
*ptr;                          // *   -> desreferenciar un puntero a char
ptr++;   ptr--;                // ++/-- -> aritmetica de punteros (avanzar/retroceder)
ptr + n;  ptr - n;              // + / - -> desplazamiento de punteros
// NOTA: char[] / char* NO soportan ==, !=, <, >, + de forma directa entre cadenas;
//       esas operaciones comparan direcciones de memoria, no el contenido.
//       Para comparar o concatenar contenido hay que usar strcmp() / strcat().


// ==========================================================================
//                     LIBRERIA <string>  (std::string)
// ==========================================================================

// ---- OPERADORES ----
a + b;                          // +   -> concatena dos strings (o string y char*)
a += b;                         // +=  -> concatena y asigna
a[i];                           // []  -> acceso/modificacion por indice (sin verificar rango)
a == b;                         // ==  -> compara igualdad de contenido
a != b;                         // !=  -> compara diferencia de contenido
a < b;   a > b;                 // < > -> comparacion lexicografica
a <= b;  a >= b;                // <= >= -> comparacion lexicografica (inclusive)
cin >> a;                       // >>  -> extraccion desde flujo de entrada
cout << a;                      // <<  -> insercion hacia flujo de salida

// ---- TAMAÑO / ESTADO ----
a.length();                     // longitud de la cadena
a.size();                       // igual que length()
a.empty();                      // true si la cadena esta vacia
a.clear();                      // vacia la cadena
a.capacity();                   // capacidad reservada actualmente en memoria
a.resize(n);                    // cambia el tamaño de la cadena a n caracteres
a.reserve(n);                   // reserva memoria para al menos n caracteres
a.shrink_to_fit();              // reduce la capacidad al tamaño real usado

// ---- ACCESO ----
a.at(i);                        // acceso por indice CON verificacion de rango (lanza excepcion)
a.front();                      // primer caracter de la cadena
a.back();                       // ultimo caracter de la cadena
a.c_str();                      // devuelve un const char* estilo C (terminado en '\0')
a.data();                       // acceso al buffer interno de datos

// ---- MODIFICACION ----
a.append(b);                    // agrega texto al final
a.insert(pos, b);               // inserta texto en una posicion
a.erase(pos, n);                // elimina n caracteres desde una posicion
a.replace(pos, n, b);           // reemplaza un tramo de n caracteres por otro texto
a.push_back(c);                 // agrega un caracter al final
a.pop_back();                   // elimina el ultimo caracter
a.assign(b);                    // reemplaza todo el contenido por otro texto
a.swap(b);                      // intercambia el contenido con otra cadena

// ---- SUBCADENAS ----
a.substr(pos, n);                // extrae una subcadena (inicio, longitud)

// ---- BUSQUEDA ----
a.find(b);                       // busca subcadena, devuelve posicion o string::npos
a.rfind(b);                      // busca desde el final hacia el inicio
a.find_first_of(chars);          // primera posicion de cualquiera de esos caracteres
a.find_last_of(chars);           // ultima posicion de cualquiera de esos caracteres
a.find_first_not_of(chars);      // primera posicion de un char que NO este en el set
a.find_last_not_of(chars);       // ultima posicion de un char que NO este en el set

// ---- COMPARACION ----
a.compare(b);                    // compara contenido (0 = iguales, <0 / >0 segun orden)

// ---- ITERADORES ----
a.begin();  a.end();             // iteradores hacia adelante (inicio / fin)
a.rbegin(); a.rend();            // iteradores inversos (para recorrer al reves)

// ---- CONVERSION NUMERICA (funciones libres de <string>) ----
std::stoi(a);                    // string -> int
std::stol(a);                    // string -> long
std::stoll(a);                   // string -> long long
std::stof(a);                    // string -> float
std::stod(a);                    // string -> double
std::to_string(numero);          // numero (int/float/double) -> string