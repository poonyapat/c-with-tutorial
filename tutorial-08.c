#include <stdio.h>
#include <stdlib.h>


int main(){
    int number;
    printf("N = ");
    scanf("%d", &number);
    printf("----print with for loop----\n");
    for (int i = 0; i < number; i++){
        printf("this is in for loop\n");
    }
    printf("----print with while loop----\n");
    int i = 0;
    while(i < number){
        printf("this is in while loop\n");
        i++;
    }
}

