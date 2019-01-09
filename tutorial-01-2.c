// tutorial-01-2.c

#include <stdio.h>

// In C language
// it can seperate each scope by '{' and '}'
// Same concept as python
// outer scope can't use anything in the inner scope
int main() {
    int outer = 5;
    {
        printf("%d", outer);

        int inner = 10;
    }

    // this line will cause a error.
    // because this scope can't find or access var 'inner'
    printf("%d", inner);
}