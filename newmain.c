/* 
 * File:   newmain.c
 * Author: phollands
 *
 * Created on 15 January 2016, 10:57
 */

#include <stdio.h>
#include <stdlib.h>
#include "include1.h"


#define TEST1 0
/*
 * 
 */
int main(int argc, char** argv) {
    // TEST1 is defined in this .c file at the top
#if TEST1 == 0
    printf("This is a test of TEST1\n");
#endif
#if TEST2 == 0
           printf("This is a test of TEST2\n");
#endif 
#if TEST3 == 0
           printf("This is a test of TEST3\n");
#endif           
// Note TEST4 is deliberately not defined anywhere
#ifdef TEST4
            printf("this is a test of whether TEST4 is defined\n")
#endif
// Note that an undefined identifier (in this case TEST4), when equated to 0 
// will return a true value as demonstrated below. This is in the gcc standard.
#if TEST4 == 0
            printf("This is a test of TEST4\n");
#endif
    return (EXIT_SUCCESS);
}
