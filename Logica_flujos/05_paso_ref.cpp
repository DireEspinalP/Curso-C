/*------------Paso por referencia------------
Paso por referencia
Cuando pasas argumentos a las funciones, C++ 
normalmente crea copias de los valores. Esto 
significa que los cambios dentro de la función
no afectan a las variables originales. El paso 
por referencia cambia este comportamiento al 
permitir que las funciones trabajen directamente 
con las variables originales.


*/
#include <iostream>
using namespace std;

//Funcion con paso de referencia en los parametros
void tripleVaalue(int &value1,int &value2,int &value3){
    value1*=3;
    value2*=3;
    value3*=3;

}
int main() {
    int value1, value2, value3;
    cin >> value1 >> value2 >> value3;
    
    cout << "Original values: " << value1 << " " << value2 << " " << value3 << endl;
    
    tripleVaalue(value1,value2,value3);
    cout << "Tripled values: " << value1 << " " << value2 << " " << value3 << endl;
    
    return 0;
}