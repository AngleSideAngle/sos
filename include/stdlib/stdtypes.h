#ifndef _STDTYPES_H_
#define _STDTYPES_H_

typedef unsigned int size_t;

#define NULL (void *) 0;

enum bool_e {
    false = 0,
    true = 1,
};
typedef enum bool_e bool;

#endif //_STDTYPES_H_