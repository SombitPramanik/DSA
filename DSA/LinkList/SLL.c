#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for NULL definition

// Define the structure for Single Linked List (SLL)
struct sll
{
    int Data;
    struct sll *link; // Pointer to the next node in the list
};

// Function to create a Single Linked List (SLL)
struct sll *CreateSLL(int length)
{
    struct sll *Head = NULL; // Initialize the head of the list
    struct sll *temp, *prev = NULL;

    for (int i = 0; i < length; i++)
    {
        // Create a new node
        temp = (struct sll *)malloc(sizeof(struct sll));
        if (temp == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        // Initialize Data and link fields
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &temp->Data);
        temp->link = NULL;

        // If it's the first node, assign it as the head
        if (Head == NULL)
            Head = temp;
        else
            prev->link = temp;

        // Move to the next node
        prev = temp;
    }

    return Head; // Return the head of the created list
}

int main()
{
    int length;
    printf("Enter the length of the SLL: ");
    scanf("%d", &length);

    // Create the Single Linked List
    struct sll *Head = CreateSLL(length);

    // Example usage: Printing the elements of the list
    printf("Elements of the Single Linked List:\n");
    struct sll *ptr = Head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->Data);
        ptr = ptr->link;
    }
    printf("\n");

    return 0;
}
