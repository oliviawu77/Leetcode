#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b);
void bubblesort(int size, int *data);
void printarray(int size, int *data);

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void bubblesort(int size, int *data){
    int i, j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size - i - 1; j++){
            if(data[j] > data[j+1]){
                swap(&data[j], &data[j+1]);
            }
        }
        printarray(size, data);
    }
}
void printarray(int size, int *data){
    printf("data: ");
    for(int i = 0; i < size; i++){
        printf("%d,", data[i]);
    }
    printf("\n");
}
void main(){

    int size = 10;
    int *data = (int*)malloc(sizeof(int) * size);

    //generate random array
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        data[i] = rand()%1000;
    }
    printf("original:\n");
    printarray(size, data);

    //sorting
    printf("sorting:\n");
    bubblesort(size, data);

    //result
    printf("result:\n");
    printarray(size, data);
}