#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyLinkedListNode {
    int data;
    struct SinglyLinkedListNode* next;
} SinglyLinkedListNode;

SinglyLinkedListNode* create_singly_linked_list_node(int node_data) {
    SinglyLinkedListNode* node = malloc(sizeof(SinglyLinkedListNode));
    if (node == NULL) {
        perror("Failed to allocate memory for a new node");
        exit(EXIT_FAILURE);
    }
    node->data = node_data;
    node->next = NULL;
    return node;
}

SinglyLinkedListNode* insert_node_at_end(SinglyLinkedListNode* head, int node_data) {
    SinglyLinkedListNode* new_node = create_singly_linked_list_node(node_data);
    if (head == NULL) {
        return new_node;
    }
    SinglyLinkedListNode* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        printf("%d", node->data);
        node = node->next;
        if (node) {
            printf(" -> ");
        }
    }
    printf(" -> NULL\n");
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        free(temp);
    }
}

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* prev = NULL;
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* next_node = NULL;

    while (current != NULL) {
        next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }

    return prev;
}

int main() {
    SinglyLinkedListNode* head = NULL;
    int items[] = {1, 2, 3, 4, 5};
    int n = sizeof(items) / sizeof(items[0]);

    for (int i = 0; i < n; i++) {
        head = insert_node_at_end(head, items[i]);
    }

    printf("Original linked list: ");
    print_singly_linked_list(head);

    head = reverse(head);

    printf("Reversed linked list: ");
    print_singly_linked_list(head);

    free_singly_linked_list(head);

    return 0;
}