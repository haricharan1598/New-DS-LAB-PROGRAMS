#include<stdio.h>
int moves;
void TOH(int n,char src,char temp,char dest)
{
if(n == 1)
{
printf("\nTransfer disk %d from Peg %c to Peg %c",n,src,dest);
moves++;
return;
}
TOH(n-1,src,dest,temp);
printf("\nTransfer disk %d from Peg %c to Peg %c",n,src,dest);
moves++;
TOH(n-1,temp,src,dest);
} 
int main()
{
int n;
printf("\nEnter the number of disks: ");
scanf("%d",&n);
TOH(n,'A','B','C');
printf("\nTotal number of moves taken = %d",moves);
return 0;
}
