#include <stdio.h>

int main() {
    char word1[] = "Hello";
    char* word2 = word1;

    word1[0] = 'W';
    word1[1] = 'o';
    word1[2] = 'r';
    word1[3] = 'l';
    word1[4] = 'd';

    printf("%s %s", word1, word2);
}

// output คืออะไร?