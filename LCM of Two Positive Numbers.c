#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter the two Integer Numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
        x=a;
    else
        x=b;
again:
    if (x%a==0 && x%b==0)
        printf("The LCM of %d and %d is %d",a,b,x );
    else
    {
        x=x+1;
        goto again;

    }
}
