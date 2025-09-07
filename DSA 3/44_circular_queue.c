// Circular queue 
#include<stdio.h>
#include<stdlib.h>

struct circular_queue {
      int size;
      int f;
      int r;
      int * arr;
};

int isEmpty(struct circular_queue *q){
      if(q->r==q->f){
            return 1;
      }
      return 0;
}

int isFull(struct circular_queue *q){
      if((q->r+1)%q->size == q->f){
            return 1;
      }
      return 0;
}

void enqueue(struct circular_queue*q, int val){
      if(isFull(q)){
            printf("This Queue is Full.");
      }
      else{
            q->r = (q->r +1)%q->size;
            q->arr[q->r]= val;
            printf("Enqueue element: %d\n", val);
      }
}
int dequeue(struct circular_queue*q){
      int a = -1;
      if(isEmpty(q)){
            printf("This Queue is Empty.");
      }
      else{
            q->f = (q->f +1)%q->size;
            a = q->arr[q->f];
      }
}

int main(){
      struct circular_queue q;
      q.size = 4;
      q.f = q.r = 0;
      q.arr = (int*)malloc(q.size*sizeof(int));

      
      // Enqueue few elements
      enqueue(&q, 12);
      enqueue(&q, 15);
      enqueue(&q, 1);
      // enqueue(&q, 1);
      // printf("Dequeue element %d\n", dequeue(&q));
      printf("Dequeue element %d\n", dequeue(&q));
      printf("Dequeue element %d\n", dequeue(&q));
      printf("Dequeue element %d\n", dequeue(&q));
      enqueue(&q, 45);
      enqueue(&q, 45);
      enqueue(&q, 45);

      if(isEmpty(&q)){
            printf("Queue is Empty.\n");
      }
      if(isFull(&q)){
            printf("Queue is Full.\n");
      }
      
      return 0; 

} 
