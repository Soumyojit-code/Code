//selection short
#include<stdio.h>
int main()
{
    int tem,a[4]={5,0,8,3};
    int j,i,min,n=4;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if (a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            tem=a[min];
            a[min]=a[i];
            a[i]=tem;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

