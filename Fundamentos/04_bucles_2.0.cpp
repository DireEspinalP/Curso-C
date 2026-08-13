/*
---------------BUCLES PARTE II---------------
Nota: En esta parte II se dara un plus de los codigos anteriores

1) Los bucles for pueden contar hacia atrás comenzando
con un número mayor, usando >= como condición y decrementando:

2) Un bucle anidado es un bucle dentro de otro bucle. El bucle
interno completa todas sus iteraciones por cada iteración individual
del bucle externo.

3) Un bucle infinito se ejecuta indefinidamente porque su condición 
siempre es verdadera o no está presente.
EJEMPLO 1) 

while (true) {
    // El código se ejecuta para siempre
}

EJEMPLO 2) 

for (;;) {
    // El código se ejecuta para siempre
}

Nota: Si quieres detener un bucle infinito use Crl+C en la terminal
*/
#include <iostream>
using namespace std;
int main()
{
cout<<"-----------USOS DEL BUCLE FOR-----------\n";
// Contando de 2 en 2 hacia arriba
for (int i = 0; i <= 10; i+=2) {
    cout << i << " ";
}
// Output: 0 2 4 6 8 10

// Contando de 2 en 2 hacia abajo
for (int i = 10; i >= 0; i-=2) {
    cout << i << " ";
}
// Output: 10 8 6 4 2 0
cout<<"-----------BUCLES ANIDADOS-----------\n";
    int n;
    cin >> n;
     for (int i=1; i<=n-1; i++){
        for (int j=0; j<1; j++){
            cout<<i<<" "<<n-i;
        }
        cout<<endl;
    }
}