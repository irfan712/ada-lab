//Liner Search using Recursion
#include<stdio.h>

int RLS(int arr[],int val,int index,int n);
void main()
{
    int n,i,arr[50],val,pos;

    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter %d elements into the array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d",&val);

    pos=RLS(arr,val,0,n);

    if(pos!=0)
        printf("Element %d is found at position %d",val,pos);
    else 
        printf("Element is not found");
}

int RLS(int arr[],int val,int index,int n)
{
    int pos=0;
    if(index>=n)
    {
        return 0;
    }
    else if(arr[index]==val)
    {
        pos=index+1;
        return pos;
    }
    else 
    {
        return RLS(arr,val,index+1,n);
    }
    return pos;
}