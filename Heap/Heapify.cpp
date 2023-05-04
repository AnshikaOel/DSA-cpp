#include <iostream>
using namespace std;

void heapify(int arr[],int size,int i)
{
    int largest=i;
    int left=i*2;
    int right=i*2+1;
    
    if(left<size && arr[largest]<arr[left])
    {
        largest=left;
    }
    
    if(right<size && arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }
}
int main()
{
    int arr[7]={-1,2,51,34,20,91,125};
    int n=7;
    
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
