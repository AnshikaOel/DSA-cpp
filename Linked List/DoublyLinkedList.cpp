#include <iostream>
using namespace std;
struct Node
{
   int data;
   struct Node*next;
   struct Node*prev;
};
struct Node*first=NULL;
struct Node*last=NULL;
void insertion(int x)                // INSERTION IN DOUBLY LINKED LIST 
{
    Node*p=new Node;
    p->data=x;
    p->next=NULL;
    p->prev=NULL;
    if(first==NULL)
    {
       first=p;
       last=p;
    }
    else
    {
        last->next=p;
        p->prev=last;
        last=p;
    }
}
void insertpos(int y,int n)          //  INSERTION AT A GIVEN POSITION
{
    Node*t=new Node;
    t->data=y;
    t->next=NULL;
    t->prev=NULL;
    Node*q=new Node;
    Node*r=new Node;
    q=first;
    r=first->next;
    for(int i=0;i<n-2;i++)
    {
       q=q->next;
       r=r->next;
    }
    t->prev=q;
    q->next=t;
    t->next=r;
    r->prev=t;
}
void display()
{
    Node*q=new Node;
    Node*r=new Node;
    q=first;
    r=last;
 //   std::cout<<"FROM THE STARTING "<<endl;            // WITH THE HELP OF FIRST POINTER 
    while(q!=NULL)
    {
        std::cout<<q->data<<endl;
        q=q->next;
    }
 /*   std::cout<<"FROM THE LAST "<<endl;                  // WITH THE HELP LAST POINTER 
    while(r!=NULL)
    {
        std::cout<<r->data<<endl;
        r=r->prev;
    }         */
}
void deleltion(int pos)              // DELETION AT PARTICULAR POSITION
{
    Node*a1=new Node;
    Node*a2=new Node;
    Node*a3=new Node;
    a1=first;
    a2=first->next;
    for(int i=0;i<pos-2;i++)
    {
         a1=a1->next;
         a2=a2->next;
    }
    a1->next=a2->next;
    a3=a2->next;
    a3->prev=a2->prev;
}
int main()
{
    insertion(8);
    insertion(2);
    insertion(9);
    insertion(4);
    insertion(3);
    insertion(6);
    std::cout<<"doubly linked list "<<endl;
    display();
    std::cout<<"doubly linked list after deletion "<<endl;
    deleltion(3);
    display();
    std::cout<<"doubly linked list after inserting at particular position"<<endl;
    insertpos(15,5);
    display();
}
