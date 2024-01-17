#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0) ? -n : n;
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int count = 0;
    while (*s) {
        count++;
        s++;
    }
    return count;
}

void _puts(char *s) {
    while (*s) {
        _putchar(*s);
        s++;
    }
}

char *_strcpy(char *dest, char *src) {
    char *copy = dest;
    while ((*dest++ = *src++))
        ;
    return copy;
}

// Implement the remaining functions similarly


