#include <stdio.h>

int main(){
    int number;
    printf("N = ");
    scanf("%d", &number);

    printf("----print with for loop----\n");            
    for (int i = 0; i < number; i++){                   
        printf("this is in for loop\n");                
    }                                            

    int arr[6] = {1,3,5,7,9,11};
    int sum = 0;

    // use for-loop to accessing array
    for (int i = 0; i < 6 ; i++) {
        sum += arr[i];
    }

    printf("%d\n", sum);
}