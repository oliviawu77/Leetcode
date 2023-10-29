#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Sort.h"

void selectionsort(int size, int *data){
    int i, j;
    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(data[i] > data[j]){
                swap(&data[i], &data[j]);
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
    selectionsort(size, data);

    //result
    printf("result:\n");
    printarray(size, data);
}