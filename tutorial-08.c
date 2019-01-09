#include <stdio.h>

int main(){
    int number;
    printf("N = ");
    scanf("%d", &number);                                          

    printf("----print with while loop----\n");
    int i = 0;
    while(i < number){
        printf("this is in while loop\n");
        i++;        // the result is the same as i+=1, but what it truly do isn't the same.
    }
}