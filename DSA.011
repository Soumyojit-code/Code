//QUICK SHORT
#include<stdio.h>
int Quick(int *a,int beg,int end);
int Partition(int *a,int beg,int end);
int Partition(int *a,int beg,int end)
{
    int tem,loc,r,l,fleg;
    loc=l=beg;
    r=end;
    fleg=0;
    while(fleg!=1)
    {
        while (a[loc] <= a[r] && (loc != r)) {
            r--;
        }
        if (loc == r)
            fleg = 1;
        else if (a[loc] > a[r]) {
            tem = a[loc];
            a[loc] = a[r];
            a[r] = tem;
            loc = r;
        }
        if (fleg != 1)
       {
            while (a[loc] >= a[l] && (loc != l))
            {
                l++;
            }
            if (loc == l)
            {
                fleg = 1;
            }

            else if (a[loc] < a[l]) {
                tem = a[loc];
                a[loc] = a[l];
                a[l] = tem;
                loc = l;
            }
        }
    }
    return loc;
}
int Quick(int *a,int beg,int end)
{
    int loc;
    if(beg<end)
    {
        loc=Partition(a, beg,end);
        Partition(a,beg,loc-1);
        Partition(a, loc+1,end);
    }
}
int main()
{
    int n,i;
    printf("Enter the total numer of element of the array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array element in %d index: ",i);
        scanf("%d",&a[i]);
    }
    printf("first array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    Quick(a,0,n-1); //function calling
    printf("\nThe sorted arry:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
