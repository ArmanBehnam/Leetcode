#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int len = strlen(s);
    
    // Handle edge cases
    if (numRows == 1 || numRows >= len) {
        return strdup(s);
    }
    
    // Allocate memory for the result
    char* result = (char*)malloc((len + 1) * sizeof(char));
    
    // Allocate memory for each row
    char** rows = (char**)malloc(numRows * sizeof(char*));
    int* rowLens = (int*)calloc(numRows, sizeof(int));
    
    for (int i = 0; i < numRows; i++) {
        rows[i] = (char*)malloc((len + 1) * sizeof(char));
        rows[i][0] = '\0';  // Initialize as empty strings
    }
    
    int index = 0;
    int step = 1;
    
    // Fill each row
    for (int i = 0; i < len; i++) {
        rows[index][rowLens[index]++] = s[i];
        rows[index][rowLens[index]] = '\0';
        
        if (index == 0) {
            step = 1;
        } else if (index == numRows - 1) {
            step = -1;
        }
        
        index += step;
    }
    
    // Combine rows into result
    int resultIndex = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < rowLens[i]; j++) {
            result[resultIndex++] = rows[i][j];
        }
        free(rows[i]);
    }
    result[resultIndex] = '\0';
    
    // Free allocated memory
    free(rows);
    free(rowLens);
    
    return result;
}