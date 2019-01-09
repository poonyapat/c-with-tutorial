#include <stdio.h>

int main() {
    int a = 10;
    int b = 22;
    {
        int a = 12;
        printf("%d", b);
    }
    
    printf("%d", a);
}

// output คืออะไร?
