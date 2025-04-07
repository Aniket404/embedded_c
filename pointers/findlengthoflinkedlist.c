#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode) {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

// Function to find the length of the linked list using two pointers
int findLength(Node *head) {
    int count = 0;
    Node *current = head;

    while (current) {
        count++;
        current = current->next;
    }

    return count;
}

// Bonus: find the midpoint using two-pointer method
Node* findMidpoint(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow; // slow is now at midpoint
}

int main() {
    // Create sample list: 1 -> 2 -> 3 -> 4 -> 5
    Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    int length = findLength(head);
    Node *mid = findMidpoint(head);

    printf("Length of the linked list: %d\n", length);
    printf("Midpoint value: %d\n", mid->data);

    // Clean up (free memory)
    Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
