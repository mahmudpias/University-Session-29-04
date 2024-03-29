#include<stdio.h>

void find_max_min(int a[], int n)
{
    int max = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    int min = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    printf("%d %d",min,max);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)  
        scanf("%d",&a[i]);
    
    find_max_min(a,n);

    return 0;
}