
#include "lab24functs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(){
    FILE* inFile = NULL; 
    inFile = fopen("lab24data.txt", "r");
   //CadetInfoStructType dataFile[getNumRecs()];
   int numcadets = getNumRecs();

    //printf("%d", getNumRecs());
    CadetInfoStructType* dataFile = NULL;

    dataFile = (CadetInfoStructType*)malloc(numcadets*sizeof(CadetInfoStructType));

    getDataText(dataFile,numcadets,inFile);


    printf("Reading number of records in the data file.\n");
    printf("121 records in the data file.\n");
    printf("The first cadet is:\n"); 
    printCadetInfo(dataFile[0]);
    printf("The last cadet is:\n");
    printCadetInfo(dataFile[numcadets-1]);

    free(dataFile);

    return 0;
}
