#include <stdio.h>

// Custom memcpy using pointers
void* my_memcpy(void *dest, const void *src, size_t n) {
    char *d = (char *)dest;
    const char *s = (const char *)src;

    while (n--) {
        *d++ = *s++;
    }

    return dest;
}
int main() {
    char src[] = "hello";
    char dest[6]; // 5 letters + null terminator

    my_memcpy(dest, src, 6); // Including '\0'

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
