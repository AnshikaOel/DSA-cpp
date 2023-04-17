#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void push(stack* st ,int x)
{
    if(st->top==st->size-1)
    {                                       // INSERTING ELEMENT TO STACK
        std::cout<<"Stack Overflow"<<endl;
    }
    else{
        st->top++;
        st->s[st->top]=x;
        //std::cout<<x<<endl;
    }
}
void pop(struct stack*q)                  // DELETING ELEMENT FROM STACK
{
    if(q->top==-1)
    {
        std::cout<<"stack Underflow"<<endl;
    }
    else{
        std::cout<<q->s[q->top]<<endl;
        q->top--;
    }
}
void isempty(struct stack *ptr)
{                                             //  CHECKING WHETHER THE STACK IS EMPTY OR NOT
  if(ptr->top==-1)
   {
    std::cout<<"The stack is Empty"<<endl;
   }
   else{
      std::cout<<"The is not empty"<<endl;
   }
}
void display(struct stack*ab)                 //  DISPLAYING THE STACK
{
     int i=0;
     while(i!=ab->top)
     {
        std::cout<<ab->s[i]<<endl;
        i++;    
     }
}
void peek(struct stack *bc,int pos)              // FINDING ELEMENT AT PARTCULAR POSITION
{
    if(bc->top-pos+1>0)
    {
        std::cout<<"Element at position "<<pos<<" is ";
        std::cout<<bc->s[bc->top-pos+1]<<endl;;
    }
   else{
    std::cout<<"Invalid Postion "<<endl;
   }
}
int main()
{
    
    struct stack *st= new stack;    /*NEED EXPLANATION FOR THIS*/
    st->size=10;                /* if we use struct stack st then we will use "." operator to access */
    st->top=-1;        /* if we are using * then to access its parts we will use "->" as this will become pointer to stack */
    st->s=new int[st->size];
    isempty(st);
    std::cout<<"inserting the elements"<<endl;
    push(st,5);
    push(st,34);
    push(st,55);
    push(st,15);
    push(st,50);
    push(st,25);
    display(st);
    std::cout<<"Deleting the Element from Stack"<<endl;
    pop(st);
    peek(st,7);
}
