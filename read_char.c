#include <stdio.h>


int main(){
    // read the file 
    FILE *fp = fopen("fil_d.txt", "r");
    int ch = getc(fp);
    while (ch != EOF )
    {
        // to display the contents of the fil ein the screen 
        putchar(ch);
        ch = getc(fp);
    }

    if (feof(fp))
     printf("\n Reached the end of file.");
    else
     printf("\n Something gone wrong."); 
    fclose(fp);
     
    getchar();

    
    
        

    return 0;
}