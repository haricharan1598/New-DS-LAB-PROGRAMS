#include<stdio.h>
int fibo(int n)
{
    if(n == 0 || n == 1) 
    return n;
    return(fibo(n-1) + fibo(n-2));
}
int main()
{
    int i,n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("\nFirst %d Fibonacci numbers:\n",n);
    for(i=0;i<n;i++)
    {printf("%d\n",fibo(i));} 
    return 0;
}