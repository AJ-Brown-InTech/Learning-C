#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    FILE *file;
    file = fopen("loc.csv", "r");
    if (file == NULL) {
        printf("Can't open file\n");
        return -1;
    }
    char row[100];
    while (fgets(row, 100, file) != NULL) {
        // Do something with the row
        printf("%s", row);
    }
    fclose(file);
    return 0;
}