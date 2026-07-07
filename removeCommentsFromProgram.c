#include <stdio.h>

// if I see //, then I remove all characters after - DONE
// if I see /*, then I remove all characters after, until */

/*
another comment
*/

int main(void) {
    short printingChar = 1;
    short isItStarred = 0;
    short isItSimple = 0;
    
    int c;
    while((c = getchar()) != EOF) {
        if(c == '/') {
            c = getchar();
            if(c == '/') { // start of comment
                isItSimple = 1;
                printingChar = 0;
            }

            if(c == '*') {
                printingChar = 0;
                isItStarred = 1;
            }

            if(printingChar) putchar('/');
        }
        
        if(printingChar == 0 && c == '\n' && isItSimple == 1) {
            printingChar = 1;
            isItSimple = 0;
            isItStarred = 0;
        }

        if(isItStarred == 1 && c == '*') {
            c = getchar();
            if(c == '/') {
                isItStarred = 0;
                printingChar = 1;
                c = getchar();
            }
        }
        
        if(printingChar == 1) {
            putchar(c);
        }
    }
}
