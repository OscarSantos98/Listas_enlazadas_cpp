# Listas_enlazadas_cpp
Este repositorio contiene un ejemplo del uso de listas enlazadas mediante punteros en c++. 

Al compilar el código y ejecutar el .exe se obtiene un programa funcional de un directorio de pacientes. En este directorio se pueden hacer 5 funciones básicas:
1. Agregar un nuevo paciente
2. Buscar paciente existente
3. Borrar paciente existente
4. Imprimir catálogo de pacientes
5. Salir del programa

## Características del programa y ventajas por el uso de listas enlazadas
* Se pueden crear un número ilimitado de pacientes. Una ventaja con las listas enlazadas es que la memoria se va asignando conforme se va necesitando, de tal forma que no debemos preocuparnos por saber el número de pacientes que tendrá el programa al crear este código.
* El programa está configurado de tal forma que si se busca un número de paciente que aún no exista o que fue borrado aparezca un mensaje indicando que no se encontró ese valor. 
* De igual forma al intentar borrar un número de paciente que no existe aparecerá un mensaje apropiado.
* Se imprimen todos los pacientes añadidos al directorio. Si se elimina uno de ellos o todos, entonces la lista muestra los cambios mostrando los restantes o indicando que la lista está vacía. El tamaño de la lista se actualiza al crear o borrar un paciente también.
* Salir del programa cierra la ventana.

## Futuro de este trabajo
De momento no guarda de manera externa los pacientes añadidos. Una implementación a futuro podría ser guardarlos en una base de datos y que el programe retome esa base de datos al abrirse nuevamente. De momento no lo podré hacer yo, pero si alguien desea hacer un pull-up request con este cambio es bienvenido.
