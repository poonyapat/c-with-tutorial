#include <stdio.h>
#include <ctype.h>
int main() {

    char c[6] = "Hello";

    for (int i = 0 ; i < 5 ; i++) {
        c[i] = toupper(c[i]);
    }

    c[4] = '\0';
    printf("%s", c);
}

// output คืออะไร?
