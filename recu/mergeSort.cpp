#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
    int m=s+(e-s)/2;
    int len1=m-s+1;
    int len2=e-m;
    int arr1[len1];
    int arr2[len2];
    int k=s;
    for(int i=0;i<len1;i++)
    {
        arr1[i]=arr[k++];
    }
    k=m+1;
    for(int i=0;i<len2;i++)
    {
       arr2[i]=arr[k++];
    }
    k=s;
    int index1=0,index2=0;
    while(index1<len1 && index2<len2)
    {
        if(arr1[index1]<arr2[index2])
        {
            arr[k++]=arr1[index1++];
        }
        else{
            arr[k++]=arr2[index2++];
        }
    }
    while(index1<len1)
    {
        arr[k++]=arr1[index1++];
    }
    while(index2<len2)
    {
        arr[k++]=arr2[index2++];
    }
}
void mergesort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int m=s+(e-s)/2;
   mergesort(arr,s,m);
   mergesort(arr,m+1,e);
   merge(arr,s,e);
}
int main()
{
    int arr[8]={99,12,83,1,18,84,45,6};
    cout<<"Array before sorting : "<<endl;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    mergesort(arr,0,8);
    cout<<"Array after sorting : "<<endl;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}
