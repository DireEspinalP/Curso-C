// --------BUCLES------------
/*
    1) for : permite repetir codigo varias veces con una 
        incializacion, condicion, update. Ademas esto es funcionable
        si no colocas algunos de estos parametros del iterador

    2) while: ejecuta código mientras una condición sea true
    A diferencia de los bucles for que iteran sobre un rango específico,
    los bucles while continúan basándose en que se cumpla una condición.

    4) do-while: ejecuta el bloque de código al menos una vez antes de comprobar la condición.
    El cuerpo del bucle se ejecuta primero, luego se comprueba la condición. El bucle continúa
    mientras la condición sea true.

    5) break: detiene el bucle instantáneamente cuando se encuentra.

    6) continue: detiene la iteración actual y continúa con la siguiente iteración:
*/
#include <iostream>
using namespace std;
int main (){
cout<<"---------FOR---------\n";
   //for (initialization; condition; update){code}
     for(int i=0; i<=4; i++){
         cout<<"Hello C++ "<<i<<endl;
        }

cout<<"---------WHILE---------\n";
    double num;
    cout<<"Escribe un numero: ";
    cin>>num;
    while (num>=3.5){
       num=num/2.0;
    }
    cout<<num;


cout<<"---------DO-WHILE---------\n";
    int sum = 0;
    int number = 1;
    do {        
        sum=sum+number;
        number=number+2;
        cout<<"Sum is: "<<sum<<endl;
        cout<<"Num is: "<<number<<endl;
    }while(number<50); 
    //NOTA: no te olvides ";" al final del do-while

    cout << "Final Sum: " << sum << endl;

cout<<"---------BREAK---------\n";
    for (int i = 0; i < 10; i++) {
       if (i == 6) {
          break;
         }
     cout << i << endl;
    }

cout<<"---------CONTINUE---------\n";
    for (int i = 1; i <= 20; i++) {
        if(i%2==1){
            continue;
        }
        cout << i << endl;
    }
        return 0;

}
