/*---------------PUNTEROS III)---------------


Memoria dinámicas:
Hasta ahora, has trabajado con punteros que apuntan a variables ya creadas en tu programa.
 ¿Pero qué pasa si necesitas crear variables mientras tu programa se está ejecutando? 
 Aquí es donde la asignación dinámica de memoria con la palabra clave new se vuelve esencial.

NEW: La palabra clave new te permite asignar memoria para una variable en el heap durante la
ejecución del programa. A diferencia de las variables regulares que se crean en el stack, 
la memoria asignada dinámicamente persiste hasta que la liberes explícitamente.

La asignación dinámica de memoria es particularmente útil cuando no sabes cuánta memoria necesitarás
hasta el tiempo de ejecución, o cuando necesitas que las variables existan más allá del ámbito donde
fueron creadas. Esta flexibilidad convierte a new en una herramienta poderosa para construir programas 
más complejos.

Liberar memoria con 'delete':
Cuando asignas memoria dinámicamente usando new, esa memoria no desaparece automáticamente cuando 
terminas de usarla. A diferencia de las variables regulares que se limpian automáticamente, la memoria 
asignada dinámicamente permanece en uso hasta que la liberas explícitamente. Aquí es donde la palabra 
clave delete se vuelve esencial.

La palabra clave delete libera la memoria que fue asignada previamente con new. Cuando usas delete, 
le estás indicando al sistema que has terminado con esa memoria y que puede ser reutilizada para otros fines:


La regla fundamental NEW->DELETE

Después de llamar a delete en un puntero, ese puntero se vuelve inválido y no debe usarse de nuevo. 
Es una buena práctica establecer el puntero a nullptr después de eliminarlo para evitar usarlo accidentalmente
*/
#include <iostream>
using namespace std;

int main() {
    int firstValue, secondValue;
    cin >> firstValue;
    cin >> secondValue;

    int* dynamicPtr = new int;   
    *dynamicPtr = firstValue;    
    cout << "Initial value: " << *dynamicPtr << endl;

    *dynamicPtr = secondValue;  
    cout << "Updated value: " << *dynamicPtr << endl;

    delete dynamicPtr;       
    dynamicPtr = nullptr;
    cout << "Memory freed successfully" << endl;

    return 0;
}