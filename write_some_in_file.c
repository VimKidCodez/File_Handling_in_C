#include <stdio.h>

int main()
{
    FILE * fs ;
    // reads the file
    fs = fopen("fil_d.txt","w");
    // prints the text beklow
    fprintf(fs,"%s","why vs code is not showing output of my c program");
    fclose(fs); // closes the text file 


    return 0 ;
}