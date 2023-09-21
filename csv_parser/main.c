#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_COL 100
#define MAX_ROWS 1000
#define MAX_ROW_LEN MAX_COL 

int main() {
    FILE *file;
    // open the file and store as the file obj pointer
    file = fopen("loc.csv", "r");
    if (file == NULL) {
        printf("Can't open file\n");
        return -1;
    }



    // read the first line tr xact the cols
    char *row[MAX_ROW_LEN];
    char *state_code[MAX_COL];
    char *delim = ",";
    char *col;
    while(fgets(row, MAX_ROW_LEN, file) != NULL){
         col = strtok(row, delim);
         state_code[0] = col;
         col++;
         col = strtok(NULL, delim); 
    }
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_COLS 100
// #define MAX_ROWS 1000
// #define MAX_LINE_LENGTH 10000

// int main() {
//     FILE *file;
//     file = fopen("data.csv", "r");
//     if (file == NULL) {
//         printf("Can't open file\n");
//         return -1;
//     }

//     char line[MAX_LINE_LENGTH];
//     char *token;
//     char *delim = ",";
//     char *cols[MAX_COLS];
//     int num_cols = 0;
//     int col_indices[MAX_COLS];
//     int num_rows = 0;
//     int i, j;

//     // Read the first line to get the column names
//     fgets(line, MAX_LINE_LENGTH, file);
//     token = strtok(line, delim);
//     while (token != NULL) {
//         cols[num_cols] = token;
//         num_cols++;
//         token = strtok(NULL, delim);
//     }

//     // Create arrays to store the data in each column
//     char *data[MAX_COLS][MAX_ROWS];

//     // Store the column indices
//     for (i = 0; i < num_cols; i++) {
//         col_indices[i] = -1;
//         for (j = 0; j < strlen(cols[i]); j++) {
//             if (cols[i][j] >= 'A' && cols[i][j] <= 'Z') {
//                 col_indices[i] = j;
//                 break;
//             }
//         }
//     }

//     // Read each subsequent line and store the values in the corresponding array
//     while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
//         token = strtok(line, delim);
//         for (i = 0; i < num_cols; i++) {
//             if (col_indices[i] == -1) {
//                 continue;
//             }
//             data[i][num_rows] = malloc(sizeof(char) * (strlen(token) + 1));
//             strcpy(data[i][num_rows], token + col_indices[i]);
//             token = strtok(NULL, delim);
//         }
//         num_rows++;
//     }

//     // Print the column names and data in each column
//     for (i = 0; i < num_cols; i++) {
//         printf("%s: ", cols[i]);
//         for (j = 0; j < num_rows; j++) {
//             printf("%s ", data[i][j]);
//         }
//         printf("\n");
//     }

//     // Free the memory allocated for the data
//     for (i = 0; i < num_cols; i++) {
//         for (j = 0; j < num_rows; j++) {
//             free(data[i][j]);
//         }
//     }

//     fclose(file);
//     return 0;
// }