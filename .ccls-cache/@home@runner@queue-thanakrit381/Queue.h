#include <stdio.h>

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->data=x;
  new_node->qty=y;
  new_node->nextPtr=NULL;
if(q->headPtr==NULL) 
  q->headPtr=new_node;
else 
  q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
    int price;
   if(q->size>0){
     switch(t->data){
       case 1: printf("Ramen\n"); 
          price=100*t->qty;
          break;
       case 2: printf("Somtum\n");
          price=200*t->qty;
          break;
       case 3: printf("KFC\n");
          price=300*t->qty; 
          break;
       default: printf("No food\n");
          price = 0;
          break;
     }
  q->headPtr=t->nextPtr;
     if(q->headPtr==NULL)
       q->tailPtr=NULL;
     q->size--;
     free(t);
     
   return price;
   }
   printf("Empty queue");
   return 0;
}

