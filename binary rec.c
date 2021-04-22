//Binary Search using recursion
#include <stdio.h>
int RBS(int arr[],int low,int high,int val);
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

    pos=RBS(arr,0,n-1,val);

    if(pos==-1)
        printf("Element is not found");
    else 
         printf("Element %d is found at position %d",val,pos+1);
}
 
int RBS(int arr[],int low,int high,int val)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;

    if (arr[mid]==val) 
            return mid;
    else
        if(arr[mid]<val)
            return RBS(arr,mid+1,high,val);
    else
        return RBS(arr,low,mid-1,val);

}