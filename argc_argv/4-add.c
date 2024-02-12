#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[]) {
    int i;
    int sum;
    int j;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    
    sum = 0;

    for (i = 1; i < argc; i++) {
        for (j = 0; argv[i][j] != '\0'; j++) {
            if (!_isdigit(argv[i][j])) {
                printf("Error\n");
                return 1;
            }
        }

        
        sum += _atoi(argv[i]);
    }

    printf("%d\n", sum);

    return 0;
}

