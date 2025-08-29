//copy one array elements into another array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0;
    printf("ENTER THE TOTAL NUMBER OF ELMENT FOR TWO ARRAYS\n");
    scanf("%d",&n);
    int a1[n],a2[n];
    for(i=0;i<n;i++)
    {
        printf("the element of first array\n");
        scanf("%d",&a1[i]);
        a2[i]=a1[i];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a1[i]);
        //a2[i]=a1[i];
    }
    printf("\n");
    printf("the copay array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a2[i]);
    }
}
