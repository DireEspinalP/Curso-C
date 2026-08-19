/*--------------------VECTORES--------------------
Has estado trabajando con arreglos tradicionales de estilo C, 
los cuales tienen un tamaño fijo que debe determinarse al escribir el código. 
Pero, ¿qué pasa si necesitas una colección que pueda crecer o reducirse mientras 
tu programa se está ejecutando? Aquí es donde std::vector de la Biblioteca de 
Plantillas Estándar (STL) se vuelve invaluable.

Un vector es esencialmente un array dinámico: puede redimensionarse automáticamente 
a medida que agregas o eliminas elementos. A diferencia de los arrays regulares, 
donde debes especificar el tamaño de antemano, los vectores gestionan la memoria por ti, 
expandiéndose automáticamente cuando necesitas más espacio (eliminar elementos reduce el 
tamaño, aunque el vector no libera automáticamente la memoria subyacente).

##  Fundamentos ##
Liberia: <vector>
Crear: std::vector<type> name_vect;
Insertar elementos: name_vect.pushback(value);
Acceder: name_vect.at(value);
Tamaño: size(name_vect) || name_vect.size();
Borrar elemento: nam_vect.erase();

Después de llamar a erase(), el elemento en esa posición se 
elimina y todos los elementos posteriores se desplazan hacia abajo. 
Si intentas buscar y eliminar un elemento que no existe, find() 
devolverá end(), y comprobar esto evita errores


*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    //Primera forma
    int val1, val2, val3, val4, val5;
    cin >> val1 >> val2 >> val3 >> val4 >> val5; 
    vector<int> numbers{val1,val2,val3,val4,val5}; //Creo el vector sin for
    for(int i=0; i<size(numbers); i++){ 
        cout<<"Element "<<i<<": "<<numbers[i]<<endl; //imprimir el vector
    }
    cout<<"Vector size: "<<size(numbers); //tamaño del vector
    

    //Segunda forma
    int n;
    cin >> n;
    int num;
    vector<int> numeros;
    for (int i=0; i<n; i++){
    cin>>num;
    numeros.push_back(num);  //Creo el vector con for
    cout<<"Added "<<numeros[i]<<", "<<"size is now "<<size(numeros)<<endl; //Imprimo lo añadido y el tamaño
    }
    cout << "Final vector: ";
    for (int i=0; i<n;i++){
        cout<<numeros[i]<<" "; 
    }

    // Acceder a un valor
    int m;
    cin >> m;
    vector<int> data;
        for (int i = 0; i < m; i++) {
        int num2;
        cin >> num2;
        data.push_back(num2);
    }
    
    int index1, index2;
    cin >> index1;
    cin >> index2;
    int value1=data.at(index1);
    int value2=data.at(index2);
    cout << "Element at index " << index1 << ": " << value1 << endl;
    cout << "Element at index " << index2 << ": " << value2 << endl;
    cout << "First element: " <<data.at(0)<< endl;
    cout << "Last element: "<<data.at(n-1)<< endl;
    

    return 0;
}