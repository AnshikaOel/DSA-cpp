#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node* first=NULL;
struct Node* last=NULL;
void insertion(int x)
{
    Node*t=new Node;
    t->data=x;
    t->next=NULL;
    t->prev=NULL;
    if(first==NULL)
    {
        first=t;
        last=t;
    }
    else{
        last->next=t;
        t->prev=last;
        last=t;
    }
}
void display()
{
    Node*p=new Node;
    p=first;
    while(p!=NULL)
    {
        std::cout<<p->data<<endl;
        p=p->next;
    }
}
void reverse()             // REVERSING A LINKED LIST 
{
    Node*p1=new Node;
    p1=first;
    struct Node* temp;
    while(p1!=NULL)
    { 
        temp=p1->next;
        p1->next=p1->prev;
        p1->prev=temp;
        p1=p1->prev;
        if(p1->next==NULL && p1!=NULL)
        {
            first=p1;
           // std::cout<<first->data<<endl;
        }
        
    }                                     /* ERROR ERROR */
    do
    { 
        std::cout<<first->data<<endl;
        first=first->prev;
    }while(first!=NULL);
}
int main()
{
    insertion(8);
    insertion(16);
    insertion(3);
    insertion(7);
    insertion(1);
    insertion(98);
    insertion(65);
    insertion(11);
    std::cout<<"doubly linked list"<<endl;
    display();
    std::cout<<"reversed doubly linked list"<<endl;
    reverse();
    std::cout<<first->data<<endl;
    display();
}
