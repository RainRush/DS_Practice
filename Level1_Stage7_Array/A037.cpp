#include <stdio.h> 
#include <stdlib.h> 
#define LEN 10 
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

void selectionSort(int*, int, int(*)(int, int));

void print(int*, int len);
int ascending(int, int);
int descending(int, int);

int main(void) {  
    int number[10];
	for(int i=0;i<10;i++)
		scanf("%d",&number[i]); 
    
    selectionSort(number, LEN, ascending);
    print(number, LEN);

    return 0; 
} 

int selectedIdx(int* arr, int from, int to, int(*compar)(int, int)) {
    int selected = from;
    int i;
    for(i = from + 1; i < to; i++) if(compar(arr[i], arr[selected]) < 0) {
        selected = i;
    }
    return selected;
}

void selectionSort(int* arr, int len, int(*compar)(int, int)) { 
    int i;
    for(i = 0; i < len; i++) {
        int selected = selectedIdx(arr, i, len, compar);
        if(selected != i) { SWAP(arr[i], arr[selected]) }
    }
} 

void print(int* arr, int len) {
    int i;
    for(i = 0; i < len; i++) { printf("%d ", arr[i]); } 
    printf("\n");
}

int ascending(int a, int b) { return a - b; }
int descending(int a, int b) { return -ascending(a, b); }
