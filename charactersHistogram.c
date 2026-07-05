#include <stdio.h>

int main() {
    int size = 'z'-'0' + 1;
    int freq[size]; // without space

    for(int i = 0; i < size; i++) {
        freq[i] = 0;
    }

    int c;
    while((c = getchar()) != '\n') {
        if(c != ' ') {
            ++freq[c-'0'];
        }
    }

    for(int i = 0; i < size; i++) {
       if (freq[i] != 0){
            char myChar = i+'0';
            printf("%c: ", myChar);
            for(int j = 0; j < freq[i]; j++) {
                printf("|");
            }
            printf("\n");
        }
    }
}