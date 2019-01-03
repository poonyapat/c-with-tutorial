#include <stdio.h>
#include <stdlib.h>

int fibo(int i){
    if (i == 0 || i == 1){
        return i;
    }
    return fibo(i - 1) + fibo(i - 2);
}

int main(){
    int number;
    printf("fibo of :");
    scanf("%d", &number);
    printf("%d\n", fibo(number));
}

