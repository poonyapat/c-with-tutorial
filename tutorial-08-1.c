#include <stdio.h>

// do-while is a bit different for normal while loop
// do-while will do its "block of statement" first, then checking the condition

int main(){
    int number;
    printf("N = ");
    scanf("%d", &number);                                    

    printf("----print with while loop----\n");
    int i = 0;
    do {
        printf("this is in while loop, now i = %d\n", i);
        i++;
    } while(i < number);
}
