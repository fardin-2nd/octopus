#include<stdio.h>
int tower(int n,char beg,char aux,char end)
{
    if(n==1)
    {
        printf("\n move disk 1 from rod %c -> %c",beg,end);
        return;
    }
    tower(n-1,beg, end,aux);
    printf("\n move disk %d from rod %c -> %c",n, beg,end);
    tower(n-1,aux,beg,end);
}
int main()
{
    int n;
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}
