#include <stdio.h>
#include <stdlib.h>

// Structure to track allocated blocks
typedef struct MemNode {
    void *ptr;
    struct MemNode *next;
} MemNode;

MemNode *head = NULL;  // Head of the tracking list

// Custom malloc that tracks allocations
void *my_malloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) return NULL;

    MemNode *node = (MemNode *)malloc(sizeof(MemNode));
    node->ptr = ptr;
    node->next = head;
    head = node;

    return ptr;
}

// Custom free that removes pointer from the tracking list
void my_free(void *ptr) {
    MemNode *curr = head;
    MemNode *prev = NULL;

    while (curr) {
        if (curr->ptr == ptr) {
            if (prev)
                prev->next = curr->next;
            else
                head = curr->next;

            free(curr);
            free(ptr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    printf("Warning: Attempt to free untracked pointer!\n");
}

// Function to print memory leaks
void detect_leaks() {
    int leak_count = 0;
    MemNode *curr = head;

    while (curr) {
        printf("Memory leak detected at address: %p\n", curr->ptr);
        leak_count++;
        curr = curr->next;
    }

    if (leak_count == 0)
        printf("No memory leaks detected.\n");
    else
        printf("Total leaks: %d block(s) not deallocated.\n", leak_count);
}
int main() {
    void *p1 = my_malloc(100);
    void *p2 = my_malloc(200);
    void *p3 = my_malloc(300);

    my_free(p1);
    my_free(p2);
    // p3 is intentionally not freed (leak)

    detect_leaks();

    return 0;
}
