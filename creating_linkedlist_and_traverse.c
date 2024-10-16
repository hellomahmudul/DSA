#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

int main()
{
    int n, data;
    Node *head = NULL, *temp = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter data for node-%d: ", i + 1);
        scanf("%d", &data);

        Node *newNode = createNode(data);

        if (head == NULL)
        {
            head = newNode;
        }
            
        else
        {
            temp->next = newNode;
        }
            
        temp = newNode;
    }

    printf("Linked List___\n");
    temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}