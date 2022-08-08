#ifndef DAML_DEVICE_H
#define DAML_DEVICE_H

#include "Operation_sequence.h"

typedef struct{
    void (*execute)(daml_Operation_sequence* operation_sequence);
    void (*execute_async)(daml_Operation_sequence* operation_sequence);
    void (*await)();
} daml_Device;


#endif