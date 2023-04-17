// ADDING TWO LINKED LIST

#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
struct Node*first=NULL;
struct Node*last=NULL;
struct Node*first2=NULL;
struct Node*last2=NULL;
struct Node*third=NULL;
void insertion(int x)
{
    Node*t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
     first=t;
     last=t;
    }
    else{
        last->next=t;
        last=t;
    }
}
void insertion2(int x)
{
    Node*t=new Node;
    t->data=x;
    t->next=NULL;
    if(first2==NULL)
    {
     first2=t;
     last2=t;
    }
    else{
        last2->next=t;
        last2=t;
    }
}
void display(Node*abc)
{
    Node*t2=new Node;
    t2=abc;
    while(t2!=NULL)
    {
        std::cout<<t2->data<<endl;
        t2=t2->next;
    }
}
/*void concatinate(Node*ab,Node*bc)              // ADDING TWO LINKED LIST 
{
     last->next=first2;
     first2=NULL;
}*/
void merge(Node*first,Node*first2)
{
    struct Node*last1;
      if(first->data<first2->data)
      {
        third=first;
        last1=first;
        last1->next=NULL;
        first=first->next;
      }
      else
      {
        third=first2;
        last1=first2;
        last1->next=NULL;
        first2=first2->next;
      }
       while(first&& first2)
       {
         if(first->data<first2->data)
         {
           last1->next=first;
           last1=first;
           last1->next=NULL;
           first=first->next;
         }
         else
         {
           last1->next=first2;
           last1=first2;
           last1->next=NULL;
           first2=first2->next;
         }
       }
       if(first!=NULL)
       {
         last1->next=first;
       }
       else
       {
         last1->next=first2;
       }
   std::cout<<"heyy"<<last1->data<<endl;
}
int main()
{
    insertion(2);
    insertion(8);
    insertion(10);
    insertion(15);
    insertion2(4);
    insertion2(7);
    insertion2(12);
    insertion2(14);
    std::cout<<"First Linked list is as follows "<<endl;
    display(first);
    std::cout<<"Second linked list is as follows "<<endl;
    display(first2);
   // concatinate(first,first2);
   // std::cout<<"Merge Linked List is "<<endl;
    //display(first);
    merge(first,first2);
    std::cout<<"List agter merging will be as follows :"<<endl;
    display(third);
} 
