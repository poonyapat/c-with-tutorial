#include <stdio.h>

void triperArray(int arr[], int size) {
    int* temp[size];

    for (int i = 0 ; i < size ; i++) {
        temp[i] = &arr[i];
        *temp[i] = *temp[i]*3;
    }
}

int main() {
    int array[7] = {3, 4, 3, 6, 9, 4, 1};

    triperArray(array, 7);

    for (int i = 0 ; i < 7 ; i++) {
        printf("%d ", array[i]);
    }
}

// output คืออะไร?