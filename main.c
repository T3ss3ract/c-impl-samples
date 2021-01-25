#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------------- STRUCTS
struct Node
{
    int data;
    struct Node* next;
};

struct Node* build_linkedlist(int size)
{

}


//------------------------------------------------------- MAIN
int main() {
    printf("Linked List\n");
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    struct Node* ptr = head;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }


    //prevent memleak
    free(head);
    free(second);
    free(third);
    free(ptr);

    return 0;
}
