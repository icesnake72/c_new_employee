#include <stdio.h>


typedef unsigned short ushort;
typedef unsigned char byte;


struct _EMPLOYEE {
    ushort id;
    char name[20];
    char surname[20];
    char department[20];
};