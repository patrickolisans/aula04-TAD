#ifndef ARRAY_DINAMICO_H
#define ARRAY_DINAMICO_H

#include <stdlib.h>

typedef struct ArrayDinamico ArrayDinamico;

ArrayDinamico* array_dinamico_create(void);
void ArrayDinamico_destroy(ArrayDinamico* array);
void array_dianmico_print(ArrayDinamico* array);
void array_dinamico_get(ArrayDinamico* array, size_t index);
void array_dinamico_set(ArrayDinamico* array, size_t index, int vlaue);
size_t array_dinamico_size(ArrayDinamico* array);
size_t array_dinamico_capacity(ArrayDinamico* array);

void array_dinamico_add(ArrayDinamico* array ,int value);

#endif