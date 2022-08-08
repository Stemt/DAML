#ifndef DAML_BUFFER_H
#define DAML_BUFFER_H

#include <stdio.h>

typedef enum{
    DAML_INPUT,
    DAML_OUTPUT,
    DAML_INTERMEDIATE
} daml_Buffer_type;

typedef enum{
    DAML_INT32,
    DAML_UINT32,
    DAML_FLOAT32
} daml_Data_type;

typedef struct{
    daml_Data_type data_type;
    daml_Buffer_type buffer_type;
    void* data;
    size_t width;
    size_t height;
} daml_Buffer;

daml_Buffer* daml_Buffer_alloc(
    daml_Data_type data_type, 
    daml_Buffer_type buffer_type, 
    size_t width,
    size_t height,
    void* data);

void free(daml_Buffer* buffer);

#endif