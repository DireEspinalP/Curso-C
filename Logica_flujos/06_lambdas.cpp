/*------------------FUNCIONES LAMBDAS------------------
Estas funciones permiten crear pequeñas y anónimas function justo donde las necesitas.

La sintaxis básica de una expresión lambda sigue este patrón: [](){}. 
Los corchetes [] se denominan cláusula de captura,
los paréntesis () contienen parámetros (al igual que las function habituales) 
y las llaves {} contienen el cuerpo de la function.


La cláusula de captura controla qué variable del ámbito circundante puede usar la lambda. 
Las formas más comunes son:

[=] — captura todas las variable locales por valor (la lambda obtiene su propia copy)
[&] — captura todas las variable locales por referencia (la lambda accede a las originales)
[] — no captura nada (la lambda no puede usar ninguna variable externa)

*/
#include <iostream>
using namespace std;




int main() {
    //Ejemplo 1 (Declaracion)
    auto print=[](){
    cout<<"Hello from Lambda!"<<endl;
    };
    print();
    [](){
        cout<<"Lambda executed successfully!";
    }();
    

    //Ejemplo 2 (Parametros)
    int num1, num2;
    char operation;
    cin >> num1 >> num2 >> operation;
    
    switch (operation){
    case '+' : {[](int num1,int num2){cout<<"Sum: "<<num1+num2<<endl;}(num1,num2);break;}
    case '-' :{ [](int num1,int num2){cout<<"Difference: "<<num1-num2<<endl;}(num1,num2);break;}
    case '*' : {[](int num1,int num2){cout<<"Product: "<<(num1*num2)<<endl;}(num1,num2);break;}
    case '/' : {[](int num1,int num2){cout<<"Division: "<<(num1/num2)<<endl;}(num1,num2);break;}
    }
    return 0;
}