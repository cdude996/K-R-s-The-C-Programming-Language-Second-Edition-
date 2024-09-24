/*
 * Exercise 1-17. Write a program to print all input lines that are longer than
 * 80 characters.
 *
 * By jerryq0101
 */

#include <stdio.h>

#define NCHARS 80       /* number of characters per line,
						   including the newline character */
#define THRES 83

/* functions */
int getLine(char [], int);

/* getLine function: read a line into s, return length */
int getLine(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

int main(void)
{
    int len, nextLen;
    char first[THRES];
    char continuous[THRES];

    while ((len = my_getline(first, THRES)) > 0) {
        if (len == THRES-1) {
            printf("%s", first);
            nextLen = THRES-1;
            while (nextLen == THRES-1) {
                nextLen = my_getline(continuous, THRES);
                printf("%s", continuous);
            }
        }
        len = 0;
    }
}
