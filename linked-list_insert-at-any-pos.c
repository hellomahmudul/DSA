#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

node *createnode(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->link = NULL;

    return newnode;
}

node *add_pos(node *head, int data, int pos)
{

    node *ptr2 = (node *)malloc(sizeof(node));
    ptr2->data = data;
    ptr2->link = NULL;

    if (pos == 1)
    {
        ptr2->link = head;
        head = ptr2;

        return head;
    }

    node *ptr = head; // for traversing
    pos--;
    while (pos > 1 && ptr != NULL)
    {
        ptr = ptr->link;
        pos--;
    }

    if (ptr == NULL)
    {
        printf("Position out of bound.");
        free(ptr2);
        return head;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;

    return head;
}

int main()
{
    int n, data, item, pos;
    node *head = NULL, *temp = NULL;

    printf("Enter the node number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data for node-%d: ", i + 1);
        scanf("%d", &data);

        node *getnode = createnode(data);
        if (head == NULL)
        {
            head = getnode;
        }
        else
        {
            temp->link = getnode;
        }
        temp = getnode;
    }
    printf("Linked list_\n");
    temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
    printf("Enter data<space>position of the node: ");
    scanf("%d %d", &item, &pos);

    head = add_pos(head, item, pos);
    printf("Updated linked list_\n");
    temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    return 0;
}