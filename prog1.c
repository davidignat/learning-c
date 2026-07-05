#include <stdio.h>

int main() {
    int c;
    int spaced = 0;
    while((c = getchar()) != EOF) {
        if(c == ' ') spaced = 1;
        else if(spaced == 1) {
            spaced = 0;
            putchar(' ');
            putchar(c);
        } else putchar(c);
    }
}
