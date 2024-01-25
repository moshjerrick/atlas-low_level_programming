#include <stdio.h>

/* Placeholder for _putchar */
void _putchar(char c) {
    putchar(c);
}

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 */
void print_line(int n) {
    if (n <= 0) {
        _putchar('\n');  // If n is 0 or less, print only '\n'
    } else {
        for (int i = 0; i < n; i++) {
            _putchar('_');
        }
        _putchar('\n');  // End the line with '\n'
    }
}

int main() {
    print_line(5);  // Example: Draw a line with 5 underscores
    print_line(0);  // Example: Draw a line with 0 underscores (only newline)
    print_line(-3); // Example: Draw a line with -3 underscores (only newline)

    return 0;
}

