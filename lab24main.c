
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

   printCadetInfo(dataFile[1]);
   printCadetInfo(dataFile[numcadets]);


    return 0;
}
