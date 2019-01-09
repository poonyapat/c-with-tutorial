#include <stdio.h>

void twiceArray(int arr[], int size) {
    for (int i = 0 ; i < size ; i++) {
        arr[i] = arr[i]*2;
    }
}

int main() {
    int array[8] = {0, 1, 4, 1, 8, 1, 1, 6};

    twiceArray(array, 8);

    for (int i = 0 ; i < 8 ; i++) {
        printf("%d, ", array[i]);
    }
}