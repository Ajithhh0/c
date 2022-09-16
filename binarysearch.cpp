#include <iostream>
using namespace std;

int BinarySearch(int arr[],int beg,int end, int x){

    int mid = (beg+end)/2;

    if(arr[mid]==x){
    return mid;
    if(arr[mid]<x)
    return BinarySearch(arr,mid+1,end,x);
    if(arr[mid]>x)
    return BinarySearch(arr,beg,mid-1,x);
    }
   
    return -1;
}
int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8};
    int x = 8;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = BinarySearch(arr,0,n-1,x);
    (result == -1)   
       ? cout<<" Not in array "
       : cout<<" Present in Index"<<result;
     return 0;
}

