#include<iostream>
using namespace std;
void swaPPing(int arr[],int i,int size)
{
    if(i>size)
    {
        return;
    }
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
    swaPPing(arr,i+1,size);
}
void bubblesort(int arr[],int size,int i)
{
    if(size==0)
    {
      return ;
    }
    swaPPing(arr,i,size);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,size-1,i);
}
int main()
{
    int arr[6]={48,2,16,98,1,50};
    cout<<"Before Sorting : "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"During Sorting : "<<endl;
    bubblesort(arr,5,0);
    cout<<endl<<"Sorted Array is : "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}
