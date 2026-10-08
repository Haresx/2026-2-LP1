# Bloque 1 
1.2  Arreglo bidimensional: matriz y operaciones
- Sí, se almacena en un único bloque de memoria contiguo siguiendo el orden de firme por filas
- No hay ninguna diferencia funcional. 

# Bloque 2

2.1 Declaración, desreferencia y dirección
- Se requiere estrictamente por portabilidad y por el comportamiento de las funciones variádicas
- Ninguna para el compilador, ambas formas son equivalentes. La diferencia es únicamente de estilo de preferencia para el programador

2.2  Aritmética de punteros sobre arreglos
- Los corchetes se usan como un operador de indexacion siendo una forma de aritmetica de punteros
- Debido al operador de indexacion [] y ademas al ser conmutativa el operador + el compilador trata de la misma forma esta conmutatividad siendo posible escribir 3[p] y p[3]
- Si es valido crearlo y llevarlo a otro puntero pero no es posible desreferenciarlo debido a que es un valor indefinido

2.3 Punteros a char y cadenas literales
- EL primero crea un puntero s en el stack, pero este apunta directamente a una dirección de memoria en la sección de datos de solo lectura, mientras que el segundo al arrancar la función, el programa reserva espacio suficiente directamente del stack y copia los caracteres del literal adentro de ese espacio local. s2 es el arreglo del stack en sí mismo, por lo que tienes control total sobre esos bytes.
- El estándar de C dicta que los literales de cadena son de solo lectura principalmente por razones de optimización y arquitectura
- Usar el primer formato cuando la cadena sea una constante que nunca va a cambiar durante la ejecución, por otro lado, usar el segundo siempre que necesites manipular, editar o alterar el texto luego.

# Bloque 3

3.1 Visualizador de memoria de un arreglo
- Esto se debe a la arquitectura Little-Endian
- A diferencia de los enteros, los números de punto flotante (double) en C siguen el estándar IEEE 754
- Si ejecutaras este mismo código en una arquitectura Big-Endian, los bytes se almacenarían en "orden natural de lectura humana", es decir, el byte más significativo va primero, el entero v[0] = 1 se vería exactamente como 00 00 00 01 en la memoria

# Bloque 4
4.1 Malloc vs calloc 
- malloc requeire solo un puntero mientras que calloc requiere dos parametros que es un puntero y la cantidad