#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct {
    Node *front;
    Node *back;
    int size;
} Deque;

void initDeque(Deque *deque) {
    deque->front = deque->back = NULL;
    deque->size = 0;
}

void push_front(Deque *deque, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = deque->front;
    newNode->prev = NULL;

    if(deque->front == NULL) {
        deque->front = deque->back = newNode;
    } else {
        deque->front->prev = newNode;
        deque->front = newNode;
    }
    deque->size++;
}

void push_back(Deque *deque, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = deque->back;

    if(deque->back == NULL) {
        deque->front = deque->back = newNode;
    } else {
        deque->back->next = newNode;
        deque->back = newNode;
    }
    deque->size++;
}

int pop_front(Deque *deque) {
    if(deque->front == NULL) return -1;

    Node *temp = deque->front;
    int data = temp->data;

    deque->front = deque->front->next;
    if(deque->front == NULL) deque->back = NULL;
    else deque->front->prev = NULL;

    free(temp);
    deque->size--;
    return data;
}

int pop_back(Deque *deque) {
    if(deque->back == NULL) return -1;

    Node *temp = deque->back;
    int data = temp->data;

    deque->back = deque->back->prev;
    if(deque->back == NULL) deque->front = NULL;
    else deque->back->next = NULL;

    free(temp);
    deque->size--;
    return data;
}

int size(Deque *deque) {
    return deque->size;
}

int empty(Deque *deque) {
    return deque->size == 0;
}

int front(Deque *deque) {
    if(deque->front == NULL) return -1;
    return deque->front->data;
}

int back(Deque *deque) {
    if(deque->back == NULL) return -1;
    return deque->back->data;
}

int main() {
    int N, x;
    char command[20];
    Deque deque;
    initDeque(&deque);

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%s", command);
        if(!strcmp(command, "push_front")) {
            scanf("%d", &x);
            push_front(&deque, x);
        } else if(!strcmp(command, "push_back")) {
            scanf("%d", &x);
            push_back(&deque, x);
        } else if(!strcmp(command, "pop_front")) {
            printf("%d\n", pop_front(&deque));
        } else if(!strcmp(command, "pop_back")) {
            printf("%d\n", pop_back(&deque));
        } else if(!strcmp(command, "size")) {
            printf("%d\n", size(&deque));
        } else if(!strcmp(command, "empty")) {
            printf("%d\n", empty(&deque));
        } else if(!strcmp(command, "front")) {
            printf("%d\n", front(&deque));
        } else if(!strcmp(command, "back")) {
            printf("%d\n", back(&deque));
        }
    }
    return 0;
}
