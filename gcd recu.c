//GCD using recursion

#include <stdio.h>
int gcdr(int a,int b);

void main()
{
    int m,n,res;
    printf("Enter two positive numbers\n");
    scanf("%d%d",&m,&n);
    res=gcdr(m,n);
    printf("The GCD of %d and %d is %d",m,n,res);
    
}

int gcdr(int a,int b)
{
    if(b==0)
        return a;
    else 
        return gcdr(b,a%b);
}