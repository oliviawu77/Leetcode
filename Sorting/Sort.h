#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b);
void printarray(int size, int *data);
void generate_random_array(int size, int *data);


void bubblesort(int size, int *data);
void selectionsort(int size, int *data);
void insertionsort(int size, int *data);

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printarray(int size, int *data){
    printf("data: ");
    for(int i = 0; i < size; i++){
        printf("%d,", data[i]);
    }
    printf("\n");
}

void generate_random_array(int size, int *data){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        data[i] = rand()%1000;
    }    
}
