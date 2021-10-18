
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
    int numrecords; 
    int numRead = 0;
       while (numRead < 1 && !feof(out)){
           fscanf(out, "%d",&numrecords);
           numRead++; 
       }
    return numrecords;

    fclose(out);

}

void getDataText(CadetInfoStructType dataFile[],int numcadets,FILE *out){
    int numRead=0;
    int num1;
     fscanf(out,"%d",&num1);
 out = fopen("lab24data.txt", "r");

    char firstName[30];
    char lastName[45];
   
        while (numRead < numcadets && !feof(out)) {
            fscanf(out, "%s %s %d %d %d", firstName, lastName, &dataFile[numRead].age,
               &dataFile[numRead].squad, &dataFile[numRead].year);
            strcat(firstName, " ");
            strcpy(dataFile[numRead].name, strcat(firstName, lastName));
            numRead++;
        }

    fclose(out);


}

void printCadetInfo(CadetInfoStructType cadetRecord) {
    printf("Cadet name = \t%s\n", cadetRecord.name);
    printf("Cadet squad = \t%d\n", cadetRecord.age);
    printf("Cadet year = \t%d\n\n", cadetRecord.squad);
    printf("Cadet year = \t%d\n\n", cadetRecord.year);

}