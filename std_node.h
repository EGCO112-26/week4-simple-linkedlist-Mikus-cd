#ifndef NODE_h
#define NODE_h

struct student
{
    int id;
    char name[50];
    struct student* next;
};
typedef struct student* StudentPtr;


#endif