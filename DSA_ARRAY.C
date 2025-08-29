//find average of array elements
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("ENTER THE TOTAL NUMBER OF ELMENT IN ARRAY ");
    scanf("%d",&n);
    int a[n];
    float avg=0;
    for(i=0;i<n;i++)
    {
        printf("the element of array\n");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%0.2f is average of array elements",avg);
 }
