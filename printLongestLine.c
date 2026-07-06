#include <stdio.h>
#define MAXLINE 10

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

int main() {
    int len, max;

    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0)
        if(len > max) {
            max = len;
            copy(longest, line);
        }

    if(max > 0)
        printf("%d: %s", max, longest);
    return 0;
}

int getLine(char s[], int lim) {
    int i, c;
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
    
    if(c == '\n') {
        s[i] = c;
        ++i;
        s[i] = '\0';
    } else  while((c = getchar()) != EOF && c != '\n') i++;

    return i;
}

void copy(char to[], char from[]) {
    int i = 0;

    while((to[i] = from[i]) != '\0') ++i;
}