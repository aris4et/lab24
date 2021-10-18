
#include "lab24functs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int getNumRecs(){
     FILE *out = fopen("lab24data.txt", "r");
    if (out == NULL) {
        printf("Error creating data file: %s.\n", strerror(errno));
        exit(1);
    }
    int numrecord; 
    
    return 1;
}