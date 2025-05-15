#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    int num;

    // 1. Create and write to the file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "This is a test file.\n");
    fprintf(file, "C programming is fun!\n");
    fclose(file);
    printf("Data written to file successfully.\n");

    // 2. Read from the file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nReading from file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    // 3. Append to the file
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    fprintf(file, "Appending new data to the file.\n");
    fclose(file);
    printf("\nData appended to file successfully.\n");

    // 4. Read the updated file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nReading updated file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}