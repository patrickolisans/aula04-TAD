#include <stdio.h>
#include "array_dinamico.h"
int main(void)
{
    ArrayDinamico* array = array_dinamico_create();

    for(int i = 0; i<100; i++){
        array_dianmico_add(array,i);
    }
    print("%zu\n", array_dinamico_size(array));
    print("%zu\n" ,array_dinamico_capacity(array));

    array_dinamico_print(array);
    return 0;
}
