#include <stdio.h>

int main() {
    // Declare pointers to different data types
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    
    // Store the original address of the pointers
    int *startInt = intPtr;
    char *startChar = charPtr;
    float *startFloat = floatPtr;
    
    // Increment the pointers to the next element in the array
    intPtr++;
    charPtr++;
    floatPtr++;
    
    // Calculate the size using pointer arithmetic
    int intSize = (char *)intPtr - (char *)startInt;
    int charSize = (char *)charPtr - (char *)startChar;
    int floatSize = (char *)floatPtr - (char *)startFloat;

    // Print the results
    printf("Size of int: %d bytes\n", intSize);
    printf("Size of char: %d bytes\n", charSize);
    printf("Size of float: %d bytes\n", floatSize);

    return 0;
}
