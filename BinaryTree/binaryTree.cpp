#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
         this->data=x;
         this->left=NULL;
         this->right=NULL;
    }  
};
Node* enterdata(Node* root)
{
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root= new Node(data);
        
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter the data of the left node of "<<data<<" : "<<endl;
    root->left= enterdata(root->left);
    cout<<"Enter the data of right node of "<<data<<" : "<<endl;
    root->right=enterdata(root->right);
    return root;
}
int main()
{
    cout<<"Creating a binary tree "<<endl;
    Node*root=NULL;
    root=enterdata(root);
    return 0;
}
