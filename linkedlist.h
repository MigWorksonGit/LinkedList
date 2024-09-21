/*
* Single Header basic linked list implementation
*/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node_t Node;
struct Node_t {
    Node* next;
    int value;
};

typedef struct {
    Node* begin;
    Node* end;
} List;

Node* NodeAlloc(int value) {
    Node* newnode = malloc(sizeof(Node));
    newnode->next = NULL;
    newnode->value = value;
    return newnode;
}

void ListAddEnd(List* ctx, int value) {
    if (!ctx->end) {
        ctx->end = NodeAlloc(value);
        ctx->begin = ctx->end;
        return;
    }
    ctx->end->next = NodeAlloc(value);
    ctx->end = ctx->end->next;
}

void ListAddBegin(List* ctx, int value) {
    if (!ctx->begin) {
        ctx->begin = NodeAlloc(value);
        ctx->end = ctx->begin;
        return;
    }
    Node* temp = ctx->begin;
    ctx->begin = NodeAlloc(value);
    ctx->begin->next = temp;
}

void ListFree(List* list) {
    Node* node = list->begin;
    while (node) {
        Node* temp = node;
        node = node->next;
        /* Uncomment to print */
        // printf("%d\n", temp->value);
        free(temp);
    }
    list->begin = NULL;
    list->end = NULL;
}

void PrintList(List* list) {
    printf("Priting List\n");
    Node* node = list->begin;
    while (node) {
        printf("%d\n", node->value);
        node = node->next;
    }
}

#endif