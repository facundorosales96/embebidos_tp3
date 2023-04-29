# TRABAJO PRACTICO N°3

+ Alumno: Rosales, Facundo Ezequiel
+ Carrera: Ing. Electronica
+ Asignatura: Sistemas Embebidos


Lista de comandos para compilar, ejecutar y gestionar el proyecto:

Para compilar en memoria Estatica:
+ `make all`

Para compilar en memoria Dinamica:
+ `make CFLAGS=-DDYNAMIC`

Ejecucion:
+ Ejecutar el programa: `./build/bin/app.elf`
+ Eliminar la carpeta "build": `make clean`
+ Generar la documentación: `make docs`

Realizar `make clean` en caso de cambiar la forma de compilacion