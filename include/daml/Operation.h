#ifndef DAML_OPERATION_H
#define DAML_OPERATION_H

#include "Buffer.h"

typedef enum{
    DAML_MATRIX_ADD,
    DAML_MATRIX_SUBTRACT,
    DAML_MATRIX_SCALAR_MULTIPLY,
    DAML_MATRIX_SCALAR_DIVIDE,
    DAML_MATRIX_DOT,
    DAML_MATRIX_TRANSPOSE
}daml_Operation_type;

typedef struct{
    daml_Operation_type type;
    daml_Buffer* parameters;
}daml_Operation;

#endif