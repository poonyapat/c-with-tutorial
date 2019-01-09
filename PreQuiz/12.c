#include <stdio.h>

int main() {
    int count = 0;
    for (char c ; c != 'o' ; c=getchar()) {
        count++;
    }

    printf("%d", count);
}

// ถ้าพิมพ์ input ว่า hello จะได้ Output คืออะไร

