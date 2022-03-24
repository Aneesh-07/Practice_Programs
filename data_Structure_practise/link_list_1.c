
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void createList(int n);
int deleteAllByKey(int key);
void displayList();

int main()
{
    int n, key, totalDeleted;

    scanf("%d", &n);

    createList(n);

    scanf("%d", &key);

    totalDeleted = deleteAllByKey(key);

    printf("Linked List:");

    displayList();

    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("Unable to allocate memory. Exiting from app.");
        exit(0);
    }

    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;

    for (i = 2; i <= n; i++)
    {
        newNode = malloc(sizeof(struct node));

        if (newNode == NULL)
        {
            printf("Unable to allocate memory. Exiting from app.");
            exit(0);
        }

        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

void displayList()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("->%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int deleteAllByKey(int key)
{
    int totalDeleted = 0;
    struct node *prev, *cur;

    while (head != NULL && head->data == key)
    {

        prev = head;

        head = head->next;

        free(prev);

        totalDeleted++;
    }

    prev = NULL;
    cur = head;

    while (cur != NULL)
    {

        if (cur->data == key)
        {

            if (prev != NULL)
            {
                prev->next = cur->next;
            }

            free(cur);

            cur = prev->next;

            totalDeleted++;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }

    return totalDeleted;
}
