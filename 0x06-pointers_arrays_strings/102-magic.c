#include <stdio.h>
#include <stdlib.h>  // Include this header for dynamic memory allocation

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;

    // Dynamically allocate memory for n
    p = (int *)malloc(sizeof(int));

    if (p != NULL) {
        p[0] = 98;  // Now you can safely assign a value to p[0]
        printf("a[2] = %d\n", a[2]);
        free(p);  // Free the dynamically allocated memory when done
    } else {
        printf("Memory allocation failed\n");
    }

    return (0);
}

