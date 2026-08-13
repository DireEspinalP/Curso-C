/*
Convenciones de nomenclatura



En programación, es importante seguir las convenciones de nomenclatura para que el código sea legible
y fácil de mantener.Sin embargo, existen algunas reglas y convenciones que debes seguir al nombrar
elementos en C++:

-Los nombres pueden contener letras, dígitos y guiones bajos.
-Los nombres deben comenzar con una letra o un guion bajo.
-Los nombres distinguen entre mayúsculas y minúsculas (myVariable y myvariable son diferentes).
-Los nombres no pueden ser palabras clave de C++ (como int, float, if, etc.).

Además de estas reglas, existen algunas convenciones de nomenclatura comunes que los desarrolladores
utilizan para que su código sea más consistente y legible:

-camelCase — las palabras se unen, y cada palabra después de la primera comienza con una letra mayúscula (p. ej., totalAmount, numberOfStudents). Comúnmente utilizado para nombres de variables y funciones en C++.
-PascalCase — similar a camelCase, pero la primera palabra también comienza con una letra mayúscula (p. ej., TotalAmount, MyClass). Comúnmente utilizado para nombres de clases en C++.
-snake_case — las palabras están todas en minúsculas y separadas por guiones bajos (p. ej., total_amount, number_of_students). A menudo se utiliza en C++ para nombres de archivos o en otros lenguajes como Python.
-SCREAMING_SNAKE_CASE — como snake_case pero todo en mayúsculas (p. ej., MAX_SIZE, TOTAL_AMOUNT). Típicamente se utiliza para constantes y macros en C++.

// Bien
int age = 30;
double totalPrice = 150.99;      // camelCase
int numberOfStudents = 25;       // camelCase
const int MAX_STUDENTS = 100;    // SCREAMING_SNAKE_CASE para constantes

// Mal
int a = 30;  // Demasiado corto y poco claro
double TOTAL_PRICE = 150.99;  // Las mayúsculas no son para variables regulares
int n = 25;  // Demasiado corto y poco claro

*/