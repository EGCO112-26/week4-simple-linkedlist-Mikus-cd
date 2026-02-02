#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "std_node.h"

int main(int argc, const char * argv[]) {
    if (argc < 2) {
      //  printf("Usage: %s id1 name1 id2 name2 ...\n", argv[0]);
        return 1;
    }

    StudentPtr head = NULL, temp = NULL, newNode = NULL;
    int i;

    for (i = 1; i < argc; i += 2) {
        newNode = (StudentPtr)malloc(sizeof(struct student));
        newNode->id = atoi(argv[i]);          
        strcpy(newNode->name, argv[i+1]);     
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Student List:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d %s\n", temp->id, temp->name);
        temp = temp->next;
    }

    temp = head;
    StudentPtr next;
    while (temp != NULL) {
        next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}