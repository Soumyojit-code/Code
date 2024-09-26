//selection sort in data structer
#include<stdio.h>
int main()
{
    int n,i=0,tem=0,j;
    printf("ENTER THE TOTAL NUMBER OF ELMENT  ARRAYS\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("the element of  array\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        //smal=a[j];

        int  pos=i;
        for(j=i+1;j<n;j++)

        {
            if (a[pos] > a[j])
            {
                tem = a[pos];
                a[pos]=a[j];
                a[j]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
  return 0;
}
