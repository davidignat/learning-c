#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

int main()
{
    int c;
    while((c = getchar()) != EOF) {
        if (c == TAB) {
            putchar('\\');
            putchar('t');
        }
        else if (c == BACKSPACE) {
            putchar('\\');
            putchar('b');
        } else if (c == BACKSLASH) {
            putchar('\\');
        }
        else putchar(c);    
    }
}
