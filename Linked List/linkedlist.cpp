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
void display()                    // DISPLAYING THE LINKED LIST 
{
    Node* ab=new Node;
    ab=first;
    while(ab!=NULL)
    {
        std::cout<<ab->data<<endl;
        ab=ab->next;
    }
}
void insertpos(int n,int y)               // INSERTING AT A GIVEN POSITION
{
    Node*p=new Node;
    Node*q=new Node;
    Node*c=new Node;
    c->data=y;
    c->next=NULL;
    p=first;
    q=p->next;
    for(int i=0;i<n-1;i++)
    {
        p=p->next;
        q=p->next;
    }
    p->next=c;
    c->next=q;
}
int deletion(int m)           // DELETION FROM LINKED LIST FROM A PARTICULAR POSTION
{
   Node*l=new Node;
   Node*n=new Node;
   int d;
   l=first;
   //n=NULL;
   for(int i=0;i<m-1;i++)
   {
       n=l;
       l=l->next;
   }
   d=l->data;
   n->next=l->next;
   delete l;
   return d;
}
void reverse(Node*abc,Node*bcd)                   // REVERSE NODE USING RECURSION 
{
    if(bcd!=NULL)
    {
        reverse(bcd,bcd->next);
        bcd->next=abc;
    }
    else{
        first=abc;
        std::cout<<"run"<<endl;
    }
}
int main() 
{
    int j,a,ll;
    std::cout<<"Enter the number of elements in linked list "<<endl;
    cin>>j;
    for(int i=0;i<j;i++)
    {
        cin>>a;
        insert(a);
    }
    display();
    std::cout<<"display after insertion "<<endl;
    insertpos(2,8);
    insertpos(4,1);
    display();
    ll=deletion(2);
    std::cout<<"the deleted element is "<<ll<<endl;
    reverse(NULL,first);
    display();
}
