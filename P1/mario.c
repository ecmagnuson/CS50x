#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int height = atoi(argv[1]);

    printf("Height is: %d\n", height);
    
    // Print lines
    for (int i = 0; i < height; i++) {
        // Print spaces
        for (int j = 0; j < (height - i); j++) {
            printf(" ");
        }
        
        // print hashes
        for (int k = 0; k < i + 1; k++) {
            printf("#");
        }        
        printf("  ");

        for (int l = 0; l < i + 1; l++) {
            printf("#");
        }

        printf("\n");
    }
    
    return 0;
}