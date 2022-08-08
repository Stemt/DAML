#ifndef DAML_OPERATION_SEQUENCE
#define DAML_OPERATION_SEQUENCE

#include "Operation.h"

typedef struct{
    daml_Operation* operations;
} daml_Operation_sequence;

daml_Operation_sequence* daml_Operation_sequence_alloc();
void daml_Operation_sequence_free(daml_Operation_sequence* operation_sequence);
int daml_Operation_sequence_record_operation(daml_Operation_type operation_type, Buffer* parameters);

#endif