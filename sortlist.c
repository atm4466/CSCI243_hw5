
/**
*@file sortlist.c
*@brief Takes in integers from stdin and first inserts them into a singly linked list unsorted
*   and then sorts them later and prints them
*@authhor Andrew Moor <atm4466@rit.edu>
*@course CSCI243 HW5
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int value;
    struct Node *Next;
 }Node;

Node *SORT(Node *head, int value)
{
    //Not numerical size, but size in bytes allocated
    Node *new = malloc(sizeof(Node));
    if(new == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(1);
        //exits if head doesnt exist)
    }
    new -> value = value;
    new -> next = NULL;

    if(head == NULL || value < head->value)
    {
        new->next=head;
        //This sorts it accordingly.
        //If the node doesnt exist or if the current node's value is less than the last one it adds it
        //It is only rejected if the current node's value is more than the last
        return new;
    }
    Node *current = head;
    while(current->next != NULL && current->value <= value)
    {
        current = current->next;
    }
    new -> next = current ->next;

    current -> next = new;
    //THis returns the pointer to the begining of the linked lsit.
    return head;



}



int main(int argc, char *argv[])
{
    Node *head = NULL;
    while(scanf("%d",&var) == 1)
    {
        ;
    }
        
    for(int i =1;i<argc;i++)
    {
        head.value = (int)argv[i];
        head = head.Next;
    }
    for(int j = 0;j<argc-1;j++)
    {
        printf("node{%d}: %d",j,head.value);
        head = head.Next;
    }

   
}
