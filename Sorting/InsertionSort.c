#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"

void insertionsort(int size, int *data){
    int i, j, k;
    int tmp;
    for(i = 1; i < size; i++){
        for(j = 0; j < i; j++){
            if(data[j] > data[i]){
                tmp = data[i];
                for(k = i-1; k >= j; k--){
                    data[k+1] = data[k];    
                }
                data[j] = tmp;
                break;
            }
        }
        printarray(size, data);
    }
}

void main(){

    int size = 10;
    int *data = (int*)malloc(sizeof(int) * size);

    //generate random array
    generate_random_array(size, data);
    printf("original:\n");
    printarray(size, data);

    //sorting
    printf("sorting:\n");
    insertionsort(size, data);

    //result
    printf("result:\n");
    printarray(size, data);
}