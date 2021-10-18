


typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;



/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * @pre file is not open
 * @post file is closed
 * ----------------------------------------------------------
 */
int getNumRecs();

