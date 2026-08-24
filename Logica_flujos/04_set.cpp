/*--------------------SET--------------------
Es un contenedor que almacena una colección de 
elementos únicos en orden clasificado. A diferencia
de los vectores o arreglos donde puedes tener valores
duplicados, un conjunto evita automáticamente los 
duplicados y mantiene todo organizado.

-Liberia: <set>
-insertar: name_set.insert(value)
-contador: name_set.count(findvalue) existe 1 sino 0
-borrar: name_set.erase(erasevalue)

*/
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    //Ejemplo 1

    int n1, m1;
    cin >> n1;
    int num;

    set<int> numeros;
    for (auto i = 0; i < n1; i++) {
        cin >> num;
        numeros.insert(num);
    }

    int threshold;
    int foundCount = 0;
    cin >> m1;
    for (int i = 0; i < m1; i++) {
        cin >> threshold;
        if (numeros.count(threshold)) {
            cout << threshold << endl;
            foundCount++;
        }
    }

    cout << "Filtered count: " << foundCount << endl;

//Ejemplo 2

    int n;
    cin >> n;
    
    set<int> mySet;
       int element;
    for (int i = 0; i < n; i++) {
     
        cin >> element;
        mySet.insert(element);
    }
    
    int m;
    cin >> m;
    int erasenum;
    cout<<"Initial size: "<<mySet.size()<<endl;
    for (int i=0; i<m;i++){
        cin>>erasenum;
        mySet.erase(erasenum);
        cout<<"After removing "<<erasenum<<": size = "<<mySet.size()<<endl;
    }
    cout<<"Remaining elements:";
    for (const auto& element: mySet){
        cout<<" "<<element;
    }

    return 0;
}