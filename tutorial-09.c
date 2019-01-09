#include <stdio.h>

int sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int array[] = {1, 2, 3, 4, 5,6};

    // because we don't know what is exactly its size
    // we can use 'sizeof' to apply the solution
    printf("%d", sum(array, sizeof(array)/sizeof(int)));      

    return 0;
}