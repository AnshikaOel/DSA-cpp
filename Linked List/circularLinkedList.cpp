#include<iostream>
using namespace std;
struct Node{
    int data;
   struct Node*next;
};
struct Node*head=NULL;
struct Node*last=NULL;
void insert(int x)                 // INSERTING NODE WITH SINGLY LINKED LIST
{
   Node*t=new Node;
   t->data=x;
   t->next=NULL;
   if(head==NULL)
   {
    head=t;
    last=t;
   }
   else{
    last->next=t;
    last=t;
   }
}
/*void display()                      // DISPLAYING CIRCULAR LINKED LIST
{
    Node*p=new Node;
    p=head;
    do{
        std::cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);
}*/
void display(Node*p)                 // DISPLAYING LINKED LIST USING RECURSION
{
    static int flag=0;
    if(p!=head ||flag==0)
    {
       flag=1;
       std::cout<<p->data<<endl;
       display(p->next);
    }
    flag=0;             //value is static if we reuse display the values of flag will be 1 so if case will become
}                           // false in both so it will not go in if case
void detetion(int pos)
{
    Node*ab=new Node;
    Node*ab1=new Node;
    ab=head;
    ab1=head->next;
    for(int i=0;i<pos-2;i++)
    {
       ab=ab->next;
       ab1=ab1->next;
    }
    ab->next=ab1->next;
}
int main()
{
    Node*pi=new Node;
    insert(8);
    insert(3);
    insert(7);
    insert(2);
    insert(1);
    insert(9);
    last->next=head; 
    std::cout<<"linked list after making it circular "<<endl;        // MAKING LINKED LIST CIRCULAR LINKED LIST
    display(head);
    detetion(4);
    std::cout<<"linked list after deletion"<<endl;
    display(head);
}
