#include <stdio.h>

int main() {
    char c;

    while ((c = getchar()) != '\n') {
        putchar(c);
    }
}

// ถ้าหากพิมพ์ input ว่า cwithtongsu แล้วกด enter จะได้ output ว่าอะไร?