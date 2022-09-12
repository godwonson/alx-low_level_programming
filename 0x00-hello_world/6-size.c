#include <stdio.h>

/**
 * main -is the entry point for the program.
 *
 * Return:Zero if no error, Non-zero value if error.
 */
int main(void)
{
    printf("Size of char: %ld byte(s)\n", Sizeof(char));
    printf("Size Size of an int: %ld byte(s)\n", Sizeof(int));           
    printf("Size of a long int: %ld byte(s)\n", sizeof(long int));  	           printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));       printf("Size of a float: %ld byte(s)\n", sizeof(float));
    return (0)
}
