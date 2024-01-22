#include <stdio.h>

int main() {
// ASCII values for lowercase letters 'a' to 'z'
int start = 'a';
int end = 'z';

// Iterate through the alphabet
for (int i = start; i <= end; ++i) {
// Print each letter using putchar
putchar(i);
}

// Print a new line
putchar('\n');

return 0;
}

