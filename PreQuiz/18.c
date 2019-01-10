#include <stdio.h>
#include <stdlib.h>

int* generateArray(int start, int stop) {
    int size = stop-start+1;
    int* arr = _____________;  // <---- answer here : malloc(sizeof(int) * size)

    for (int i = 0 ; i < size ; i++) {
        arr[i] = start + i;
    }

    return arr;
}

int main() {
    int* wantedArray;

    wantedArray = generateArray(5, 10);

    for (int i = 0 ; i < 5 ; i++) {
        printf("%d ", wantedArray[i]);
    }
}

// ถ้าต้องการ output ให้ออกมาเป็น 5 6 7 8 9 จะต้องเติมคำในช่องว่างว่าอะไร?