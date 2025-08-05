#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[50], ch;

    // Writing to a file
    fptr = fopen("example.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fptr, "Hello, this is a file I/O example in C.\n");
    fclose(fptr);

    // Reading from the same file
    fptr = fopen("example.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);

    fclose(fptr);
    return 0;
}

