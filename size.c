#include <stdio.h>

int size_int;
int size_char;
int size_float;
int size_double;

int main(void)
{
    size_int = sizeof(int);
    printf("Memory Alocation for integer : %d\n", size_int);
    
    size_char = sizeof(char);
    printf("Memory Alocation for char    : %d\n", size_char);
    
    size_float = sizeof(float);
    printf("Memory Alocation for float   : %d\n", size_float);
    
    size_double = sizeof(double);
    printf("Memort Alocation for double  : %d\n", size_double);
    
    return(0);
}