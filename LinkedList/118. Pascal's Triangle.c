/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);
    *returnSize = numRows;
    int **pascal_array = (int**)malloc(sizeof(int*) * numRows);

    
    int i, j;
    for(i = 0; i < numRows; i++){
        pascal_array[i] = (int*)malloc(sizeof(int) * (i+1));
        
        //column 0
        pascal_array[i][0] = 1;
        
        //column i
        pascal_array[i][i] = 1;
        
        //column 1 ~ column i - 1
        for(j = 1; j < i; j++){
            pascal_array[i][j] = pascal_array[i-1][j-1] + pascal_array[i-1][j];
        }
        
        //calculate size
        (*returnColumnSizes)[i] = i+1;
        
    }
    
    return pascal_array;
}