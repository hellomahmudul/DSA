#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;

    return newNode;
}
Node *ad_begin(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr -> data = data;
    ptr -> next = head;
    head = ptr;

    return head;
}

int main()

{
    int data, n, insert;
    Node *temp = NULL, *head = NULL;

    printf("Enter number of Nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter data for Node %d: ", i+1);
        scanf("%d", &data);

        Node *newNode = createNode(data);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp -> next =newNode;
        }
        temp = newNode;
    }
    printf("Linked list___\n");
    temp = head;
    while (temp)
    {
        printf("%d ", temp -> data);
        temp = temp->next;
    }
printf("\n");

    printf("Enter the specific data to be inserted: ");
    scanf("%d", &insert);
    head = ad_begin(head, insert);
    
    temp = head;
    printf("Updated linked list___\n");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp-> next;
    }
return 0;
}