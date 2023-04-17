#include<iostream>
using namespace std;
struct Queue                   // QUEUE USING ARRAY USING SINGLE POINTERS
{
    int size;
    int front;
    int rear;
    int *q;         // pointers to an array 
};
void enqueue(Queue f1,int x)                 // inserting elements in queue
{
    if(f1.rear==f1.size-1)
    {
        std::cout<<"Queue is Full"<<endl;                // queue is already full
    }
    else{
        f1.rear++;
        f1.q[f1.rear]=x;                                     // inserting element
        std::cout<<f1.q[f1.rear]<<endl;
    }
}
int dequeue(Queue f1)                                  // deleting element from the queue from the front 
{
    int x=-1;
    if(f1.front==f1.rear)
    {
        std::cout<<"Queue is Empty"<<endl;;                    // queue is empty
    } 
    else{
        f1.front++;                             // deleting from queue 
        x=f1.q[f1.front];
    }
    return x;
}
int display(Queue f1)
{
    int i=f1.front;
    while(i!=f1.rear)
    {                                       // displaying queue 
        std::cout<<f1.q[i]<<endl;
        i++;
    }
}
int main()
{
   struct Queue f1;
   f1.size=10;
   f1.front=-1;
   f1.rear=-1;
   f1.q=new int[f1.size];
  dequeue(f1);
  std::cout<<"Now inserting some Elements in Queue "<<endl;
  enqueue(f1,8);
  enqueue(f1,3);
  enqueue(f1,7);
  enqueue(f1,9);
  enqueue(f1,11);
  enqueue(f1,56);
  std::cout<<"Elements are inserted succesfully "<<endl;
  display(f1);
}
