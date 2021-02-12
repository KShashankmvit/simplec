# include <stdio.h>
void main()
{
    int n,x,rev=0;
    printf("Enter a integer:\n");
    scanf("%d",&n);
    while (n>0)
    {x=n%10;
    rev=rev*10+x;
    n=n/10;
    }
    printf("reverse of given integer is\n %d",rev);

}