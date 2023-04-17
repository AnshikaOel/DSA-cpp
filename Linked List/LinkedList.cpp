#include <iostream>
using namespace std;
struct Node{
  int data;
  struct Node*next; 
};
struct Node*first=NULL;
struct Node*last=NULL;
void insert(int x)              //  INSERTING A NODE 
{
    Node*t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
int sortel()               //  CHECK IF THE LINKED LIST IS SORTED OR NOT 
{
    Node *p=new Node;
    Node *q=new Node;
    p=first;
    q=p->next;
    while(q!=NULL)
    {
        if(p->data > q->data)
        {
            return 0;
            break;
        }
        p=p->next;
        q=q->next; 
    }
    return 1;
}
void duplicate()                    // REMOVING DUPLICATES FROM THE LINKED LIST
{
    Node*e=new Node;
    Node*w=new Node;
    e=first;
    w=e->next;
    while(w!=NULL)
    {
        if(w->data==e->data)
        {
            e->next=w->next;
            delete w;
        }
        e=e->next;
        w=w->next;
    }
}
void reverse()                    // REVERSING A LINKED LIST
{
     Node*p1=new Node;
     Node*p2=new Node;
     Node*p3=new Node;
     p1=first;
     p2=NULL;
     p3=NULL;
     while(p1!=NULL)
     {
         p3=p2;
         p2=p1;
         p1=p1->next;
         p2->next=p3;
     }
     first=p2;
}
void display()                             // DISPLAYING A LINKED LIST
{
    Node* ab=new Node;
    ab=first;
    while(ab!=NULL)
    {
        cout<<ab->data<<endl;
        ab=ab->next;
    }
}
int main() {
   int j,a;
    std::cout<<"Enter the number of elements in linked list "<<endl;
    cin>>j;
    for(int i=0;i<j;i++)
    {
        cin>>a;
        insert(a);
    }
    display();
    if(sortel())
    {
        std::cout<<"linked list is sorted"<<endl;
    }
    else{
        std::cout<<"linked list is not sorted"<<endl;
    }
    duplicate();
    std::cout<<"duplicates are removed"<<endl;
    reverse();
    std::cout<<"reversed linked list"<<endl;
    display(); 
}
