#include <stdio.h>
#include <stdlib.h>

int fibo(int i){
    if (i == 0){
        return 0;
    }
    if (i == 1){
        return 1;
    }
    return fibo(i - 1) + fibo(i - 2);
}

int main(){
    int number;
    printf("fibo of :");
    scanf("%d", &number);
    printf("%d\n", fibo(number));
}

