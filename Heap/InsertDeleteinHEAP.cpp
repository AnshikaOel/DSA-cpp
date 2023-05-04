#include <iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }
    
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        
        while(index>1){
            int parent=index/2;
            if(arr[index]>arr[parent])
            {
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else
            {
                return;
            }
            
        }
        cout<<val<<"-";
    }
    
    void deletion()
    {
        if(size==0)
        {
            cout<<"Heap is Empty"<<endl;
            return;
        }
        
        arr[1]=arr[size];
        size--;
        
        int i=1;
        
        while(i<size){
            int lIndex=i*2;
            int rIndex=i*2+1;
            
            if(lIndex<size && arr[i]<arr[lIndex])
            {
                swap(arr[i],arr[lIndex]);
                i=lIndex;
            }
            else if(rIndex<size && arr[i]<arr[rIndex])
            {
                swap(arr[i],arr[rIndex]);
                i=rIndex;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        if(size==0)
        {
            cout<<"Heap is Empty"<<endl;
        
            return;
        }
        
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Heap obj;
    obj.insert(55);
    obj.insert(51);
    obj.insert(12);
    obj.insert(4);
    obj.insert(20);
    cout<<endl;
    obj.print();
    obj.deletion();
    obj.print();
    return 0;
}
