/************************************************************************************************
Copyright (c) 2023, Rosales, Facundo Ezequiel <facundoerosales@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef ALUMNO_H
#define ALUMNO_H

/** \brief Declaraciones publicas del módulo de alumnos
 **
 ** \addtogroup alumno Alumnos
 ** \brief Módulo para gestión de alumnos
 ** @{ */

/* === Headers files inclusions ================================================================ */

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */
#include <stdint.h>
/**
 * @brief Tamaño del campo
 *
 */
#define FIELD_SIZE 50

/* === Public data type declarations =========================================================== */
/**
 * @brief Estructura que representa a un alumno.
 */
typedef struct alumno_s {
    char apellido[FIELD_SIZE]; /**< Apellido del alumno. */
    char nombre[FIELD_SIZE];   /**< Nombre del alumno. */
    uint32_t documento;        /**< Documento del alumno. */
} const * alumno_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */
/**
 * @brief Serializa un objeto alumno en una cadena de caracteres
 *
 * @param alumno Puntero al objeto alumno a serializar
 * @param cadena Cadena de caracteres donde se guarda la serialización
 * @param espacio Espacio disponible en la cadena de caracteres
 * @return int retorna el tamaño de la cadena, en caso de error retorna -1
 */
int Serializar(alumno_t alumno, char cadena[], uint32_t espacio);
/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif

/** @} End of module definition for doxygen */

#endif /* ALUMNO_H */