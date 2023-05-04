#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(5);
    q.push(2);
    q.push(54);
    q.push(21);
    q.push(86);
    cout<<"The Element at the Top : "<<q.top()<<endl;
    q.pop();   //  Deleting Top Element 
    cout<<"The Top Element after deletion : "<<q.top()<<endl;
    // size 
    cout<<"Size of Max Heap is "<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"Heap is Empty "<<endl;
    }
    else
    {
        cout<<"Heap is not Empty "<<endl;
    }

    return 0;
}
