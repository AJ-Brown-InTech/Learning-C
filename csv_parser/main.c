#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define BUFFER 1024
int main(){
    FILE *csv_file;
    csv_file = fopen("loc.csv", "r");

    if(csv_file == NULL){
        puts("Error opeing the file");
        return -1;
    }

    puts("File opened successfully");

    int row, col = 0;
    char buffer[BUFFER];

    while(fgets(buffer, BUFFER, csv_file)){ 

        char* value = strtok(buffer, ",");
        ++row;
        if(row == 0){
            printf("Row: %d ", row);
            continue;
        }
        printf("Row: %d\n", row);
       
        while(value){
             printf("Value: %s\n", value); 
             value = strtok(NULL, ",");   
                col++; 
        }
    }    

}


