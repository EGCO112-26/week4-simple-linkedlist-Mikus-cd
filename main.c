//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,*head ;
    a.value = c;
    a.next=&b;
    head=&a;
    b.value=head->value+3;

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("\n");
    struct node d;
    b.next =&d;
    d.value=11; //b.next->value=11;
    //(*&d).value=11;
    //a.->next->next->value=11;
    //head->next->next->value=11;
    d.next=NULL;//Nullptr;
    /*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL*/

    printf("%d\n", head->value ); //what value for 5
    printf("%d\n", head->next->value ); //what value for 8
    printf("%d\n",head->next->next->value);//what value for 11

    printf("Insert form front\n");

    struct node e;
    e.value=2;
    e.next=&a;
    head=&e;
    printf("%d\n", head->value ); //what value for 5
    printf("%d\n", head->next->value ); //what value for 8
    printf("%d\n", head->next->next->value);//what value for 11
    printf("%d\n", head->next->next->next->value);//what value for 11
    printf("Insert form middle\n");
    struct node f;
    f.value=7;
    f.next=&b;
    a.next=&f;
    printf("%d\n", head->value ); //what value for 5
    printf("%d\n", head->next->value ); //what value for 8
    printf("%d\n", head->next->next->value);//what value for 11
    printf("%d\n", head->next->next->next->value);//what value for 11
    printf("%d\n", head->next->next->next->next->value);//what value for 11


    
    
    
    ;/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
   
    typedef struct node* NodePtr;
    NodePtr tmp=head;
    printf("Print using loop\n"); //add temp value to faciliate
        
    // Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d\n", tmp->value);
            tmp=tmp->next;
          // What is missing???
        }
    
    
   //Exercise IV change to while loop!! (you can use NULL to help)
       tmp=head;
         while(tmp!=NULL/*or tmp*/){
            printf("%3d", tmp->value);
            tmp=tmp->next;
           // What is missing???
        }
        printf("\n");
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
     */
    printf("Create by malloc\n");
    
        NodePtr temp;
        head=(NodePtr)malloc(sizeof(struct node));
        temp=head;
        n=10;
        for(i=0;i<n;i++){
            temp->value=7+i*2;
            temp->next=(NodePtr) malloc(sizeof(struct node));
            temp=temp->next;
        }
        temp->value=7+i*2;
        temp->next=NULL;
        
        temp=head;
        while(temp){
            printf("%3d",temp->value);
            temp=temp->next;
        }


        

         while(temp!=NULL/*or tmp*/){
            printf("%3d", temp->value);
            temp=temp->next;
           // What is missing???
        }
        printf("\n");
    /*  Exercise VI Free all node !!
         //use a loop to help
     */
     temp=head;
     NodePtr next;
     while(temp !=NULL){
        next=temp->next;
        free(temp);
        temp=next;
     }
        
    
    return 0;
}
