/*
--------------- ARRAYS ---------------

Los arrays son colecciones de elementos del mismo tipo, 
creados usando corchetes [] con los elementos separados por comas:

-Nota: Los operadores usados para arrays estan en carpeta "Adicional"

Los arreglos no se pueden pasar directamente a las funciones; se
"degradan" (decay) en punteros a su primer elemento.

Al pasar arreglos a funciones, es necesario pasar el tamaño como un
parámetro separado

void processArray(int arr[], int size) {
    // Trabajar con el arreglo usando el parámetro size
}


OBSERVACION:
-Bucle for mejorado: El bucle for mejorado (bucle for-each) proporciona
una forma más sencilla de iterar a través de arreglos sin indexación manual:
-NOTA: Es útil cuando necesitas acceder a cada elemento sin modificar el arreglo.
*/
#include <iostream>
#include <string>

double prod(double arr1[], int size) {
  double result = 1.0;
    for (int i = 0; i < size; i++) {
        result *= arr1[i];
    }
    return result;
}
using namespace std;
int main() {
    cout<<"-----First arrays-----"<<endl;
    int m;

    cin >> m;
    cin.ignore();
    double arr1[m];

    for (int i = 0; i < m; i++) {
        double val;
        cin >> val;
        arr1[i] = val;
    }

    double result = prod(arr1, m);
    cout << "Product of array elements: " << result << endl;

    cout<<"-----Second arrays-----"<<endl;
    // Modicar un arreglo
    int n;
    int index;
    string newElement;
    
    cin >> n;
    cin >> index;
    cin.ignore();
    getline(cin, newElement);
     string arr2[n];
    for (int i = 0; i < n; i++) {
        cin>>arr2[i];
       
    }
     // Modificar arr
    // Establece el elemento en la posición 'index' como 'newElement'
   if (index >= 0 && index < n) {
        arr2[index] = newElement;
    }
   for (int i = 0; i < n; i++) {
        cout<<arr2[i]<<endl;
    }
    
    cout<<"3)-----Bucle for mejorado en array-----"<<endl;
    string fruits[] = {"apple", "banana", "orange", "grape", "kiwi"};

    // Usar un bucle for mejorado para iterar sobre el arreglo
    for(string fruit: fruits){
        cout<<fruit<<endl;
    }
    
    return 0;
}