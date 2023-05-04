#include <iostream>
using namespace std;
void heapify(int arr[],int size,int i)
{
    int largest=i;
    int left=i*2;
    int right=i*2+1;
    
    if(left<=size && arr[largest]<arr[left])
    {
        largest=left;
    }
    
    if(right<=size && arr[largest]<arr[right])
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
    int arr[6]={49,50,55,53,52,54};
    int n=6;
    int size=5;
    
    for(int i=size/2;i>=1;i--)
    {
        heapify(arr,size,i);
    }
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    while(size>1)
    {
        swap(arr[1],arr[size]);
        size=size-1;
        heapify(arr,size,1);
    }
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
