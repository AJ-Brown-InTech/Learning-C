#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

FILE *file;

file = fopen("loc.csv", "r");
if (file == NULL){
    printf("cant open file %s","");
}
char *row[100];
while(!feof(file)){ // while its not the end of the file
    
   fgets(row, 100, file);
   
}

    return 0;
}