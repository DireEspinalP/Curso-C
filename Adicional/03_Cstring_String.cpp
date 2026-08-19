#include <iostream>
#include <cstring>   // cadenas estilo C  (char[] / char*)
#include <cerrno>    // para strerror(errno)
#include <string>    // clase std::string (C++)
using namespace std;

int main() {

    //
    //--------------------- LIBRERIA <cstring>  (char[] / char*)---------------------
    //

    char texto[50] = "Hola mundo";
    char destino[50] = "";
    char origen[50] = "Copia esto";
    char texto1[50] = "abc";
    char texto2[50] = "abd";
    char bloque1[10] = "12345";
    char bloque2[10] = "12345";
    char subcadena[10] = "mundo";
    char caracteres[10] = "aeiou";
    char delimitador[5] = " ";
    int n = 5;
    char caracter = 'o';

    // ---- LONGITUD ----
    strlen(texto);                          // longitud de la cadena (sin contar '\0')

    // ---- COPIA ----
    strcpy(destino, origen);                // copia origen en destino completo (sin control de tamaño)
    strncpy(destino, origen, n);            // copia maximo n caracteres de origen en destino
    memcpy(destino, origen, n);             // copia n bytes de memoria de origen a destino
    memmove(destino, origen, n);            // copia n bytes, seguro aunque origen y destino se solapen

    // ---- CONCATENACION ----
    strcat(destino, origen);                // concatena origen al final de destino
    strncat(destino, origen, n);            // concatena maximo n caracteres de origen al final de destino

    // ---- COMPARACION ----
    strcmp(texto1, texto2);                 // compara: 0=iguales, <0 texto1<texto2, >0 texto1>texto2
    strncmp(texto1, texto2, n);             // compara solo los primeros n caracteres
    memcmp(bloque1, bloque2, n);            // compara n bytes de memoria

    // ---- BUSQUEDA ----
    strchr(texto, caracter);                // primera aparicion del caracter dado
    strrchr(texto, caracter);               // ultima aparicion del caracter dado
    strstr(texto, subcadena);               // primera aparicion de la subcadena dada
    strpbrk(texto, caracteres);             // primera aparicion de cualquiera de los caracteres dados
    strspn(texto, caracteres);              // num de chars iniciales que SI pertenecen al set dado
    strcspn(texto, caracteres);             // num de chars iniciales que NO pertenecen al set dado
    memchr(bloque1, caracter, n);           // busca el caracter en los primeros n bytes

    // ---- TOKENIZACION ----
    strtok(texto, delimitador);             // divide la cadena en tokens usando el delimitador

    // ---- UTILIDAD ----
    memset(destino, 0, n);                  // rellena n bytes de memoria con un valor
    strerror(errno);                        // mensaje de error legible segun codigo errno

    // ---- OPERADORES SOBRE char[] / char* ----
    char c1 = texto[0];                     // []  -> acceso/modificacion de un caracter por indice
    char* puntero = texto;
    char c2 = *puntero;                     // *   -> desreferenciar un puntero a char
    puntero++;   puntero--;                 // ++/-- -> aritmetica de punteros (avanzar/retroceder)
    char* p2 = puntero + n;
    char* p3 = puntero - n;                 // + / - -> desplazamiento de punteros
    (void)c1; (void)c2; (void)p2; (void)p3;
    // NOTA: char[] / char* NO soportan ==, !=, <, >, + de forma directa entre cadenas;
    //       esas operaciones comparan direcciones de memoria, no el contenido.
    //       Para comparar o concatenar contenido hay que usar strcmp() / strcat().


    //
    //--------------------- LIBRERIA <string>  (std::string)---------------------
    //

    string cadena = "Hola mundo";
    string cadena1 = "abc";
    string cadena2 = "abd";
    string otraCadena = "otra";
    string textoAAgregar = " agregado";
    string textoAInsertar = "insertado ";
    string textoNuevo = "nuevo texto";
    string sub = "mundo";
    string chars = "aeiou";
    string textoNumerico = "123";
    int numero = 456;
    size_t posicion = 0;
    size_t cantidad = 3;
    size_t longitud = 5;

    // ---- OPERADORES ----
    string res1 = cadena1 + cadena2;         // +   -> concatena dos strings (o string y char*)
    cadena1 += cadena2;                      // +=  -> concatena y asigna
    char c3 = cadena[0];                     // []  -> acceso/modificacion por indice (sin verificar rango)
    bool b1 = (cadena1 == cadena2);          // ==  -> compara igualdad de contenido
    bool b2 = (cadena1 != cadena2);          // !=  -> compara diferencia de contenido
    bool b3 = (cadena1 < cadena2);
    bool b4 = (cadena1 > cadena2);           // < > -> comparacion lexicografica
    bool b5 = (cadena1 <= cadena2);
    bool b6 = (cadena1 >= cadena2);          // <= >= -> comparacion lexicografica (inclusive)
    (void)res1; (void)c3; (void)b1; (void)b2; (void)b3; (void)b4; (void)b5; (void)b6;
    // cin >> cadena;                        // >>  -> extraccion desde flujo de entrada
    cout << cadena;                          // <<  -> insercion hacia flujo de salida
    cout << endl;

    // ---- TAMAÑO / ESTADO ----
    cadena.length();                        // longitud de la cadena
    cadena.size();                          // igual que length()
    cadena.empty();                         // true si la cadena esta vacia
    string copia = cadena;                  // (guardamos copia antes de clear/resize para no perder el valor)
    copia.clear();                          // vacia la cadena
    cadena.capacity();                      // capacidad reservada actualmente en memoria
    copia.resize(5);                        // cambia el tamaño de la cadena
    cadena.reserve(50);                     // reserva memoria para al menos n caracteres
    cadena.shrink_to_fit();                 // reduce la capacidad al tamaño real usado

    // ---- ACCESO ----
    cadena.at(0);                           // acceso por indice CON verificacion de rango (lanza excepcion)
    cadena.front();                         // primer caracter de la cadena
    cadena.back();                          // ultimo caracter de la cadena
    cadena.c_str();                         // devuelve un const char* estilo C (terminado en '\0')
    cadena.data();                          // acceso al buffer interno de datos

    // ---- MODIFICACION ----
    cadena.append(textoAAgregar);           // agrega texto al final
    cadena.insert(posicion, textoAInsertar);// inserta texto en una posicion
    cadena.erase(posicion, cantidad);       // elimina "cantidad" caracteres desde una posicion
    cadena.replace(posicion, cantidad, textoNuevo); // reemplaza un tramo por otro texto
    cadena.push_back('!');                  // agrega un caracter al final
    cadena.pop_back();                      // elimina el ultimo caracter
    cadena.assign(textoNuevo);              // reemplaza todo el contenido por otro texto
    cadena.swap(otraCadena);                // intercambia el contenido con otra cadena

    // ---- SUBCADENAS ----
    cadena.substr(posicion, longitud);      // extrae una subcadena

    // ---- BUSQUEDA ----
    cadena.find(sub);                       // busca subcadena, devuelve posicion o string::npos
    cadena.rfind(sub);                      // busca desde el final hacia el inicio
    cadena.find_first_of(chars);            // primera posicion de cualquiera de esos caracteres
    cadena.find_last_of(chars);             // ultima posicion de cualquiera de esos caracteres
    cadena.find_first_not_of(chars);        // primera posicion de un char que NO este en el set
    cadena.find_last_not_of(chars);         // ultima posicion de un char que NO este en el set

    // ---- COMPARACION ----
    cadena.compare(otraCadena);             // compara contenido (0 = iguales, <0 / >0 segun orden)

    // ---- ITERADORES ----
    cadena.begin();  cadena.end();          // iteradores hacia adelante (inicio / fin)
    cadena.rbegin(); cadena.rend();         // iteradores inversos (para recorrer al reves)

    // ---- CONVERSION NUMERICA (funciones libres de <string>) ----
    std::stoi(textoNumerico);               // string -> int
    std::stol(textoNumerico);               // string -> long
    std::stoll(textoNumerico);              // string -> long long
    std::stof(textoNumerico);               // string -> float
    std::stod(textoNumerico);               // string -> double
    std::to_string(numero);                 // numero (int/float/double) -> string

    return 0;
}