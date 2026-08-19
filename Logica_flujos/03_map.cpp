/*--------------------MAP--------------------
Si bien los vectores son excelentes para almacenar colecciones de elementos similares, 
a veces es necesario asociar un dato con otro. Aquí es donde std::map se vuelve invaluable: 
es un contenedor que almacena elementos como pares clave-valor.

Piense en un mapa como en un diccionario donde cada palabra (la clave) tiene una definición 
correspondiente (el valor). En programación, podrías usar un mapa para almacenar nombres de 
estudiantes emparejados con sus puntuaciones de exámenes, o nombres de productos emparejados 
con sus precios. La clave te permite buscar rápidamente su valor asociado.

##  Fundamentos ##
Liberia: <map>
Crear: std::map<KeyType, ValueType> mapName;
Acceder: mapName[valueinsert]=newvalue;
Comprobar: mapName.count(findname)->1=existe o 0=No existe
Borrar elemento:  mapName.erase(nameToRemove);





*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    //FORMA 1
    map<string, int> grades;
    
    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        grades[name] = score; // Aquí es donde ocurre la magia del mapa
    }
    cout << "Student Grades:" << endl;
    for (const auto& pair : grades) {
        // pair.first es el nombre (la clave), pair.second es la nota (el valor)
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << "Total students: " << grades.size() << endl;
    

    //FORMA 2
   int n1;
    cin >> n1;
            string title;
        int copies;
    map<string, int> library;
    
    for (int i = 0; i < n1; i++) {

        cin >> title >> copies;
        library[title] = copies;
    }
    
    int m;
    cin >>m;
    for (int i = 0; i < m; i++) {
        string libroBuscado;
        cin >> libroBuscado;
           if (library.count(libroBuscado)) {
            cout << "Book \"" << libroBuscado << "\" is available with " << library[libroBuscado] << " copies" << endl;
        } else {
            cout << "Book \"" << libroBuscado << "\" is not available in the library" << endl;
        }
    }
    return 0;
}